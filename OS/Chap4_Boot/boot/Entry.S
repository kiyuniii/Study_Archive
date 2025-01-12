#include "ARMv7AR.h"
#include "MemoryMap.h"

.text
    .code 32

    .global vector_start
    .global vector_end

    vector_start:
        LDR PC, reset_handler_addr      @reset_handler_addr를 PC로 로드
        LDR PC, undef_handler_addr
        LDR PC, svc_handler_addr
        LDR PC, pftch_abt_handler_addr
        LDR PC, data_abt_handler_addr
        B   .                           @Reserved
        LDR PC, irq_handler_addr
        LDR PC, fiq_handler_addr
        
        reset_handler_addr:     .word reset_handler @시스템 초기화
        undef_handler_addr:     .word dummy_handler @정의되지 않은 명령어
        svc_handler_addr:       .word dummy_handler @시스템 호출
        pftch_abt_handler_addr: .word dummy_handler @명령어 가져오기 실패
        data_abt_handler_addr:  .word dummy_handler @데이터 접근 실패
        irq_handler_addr:       .word dummy_handler @일반 인터럽트
        fiq_handler_addr:       .word dummy_handler @고속 인터럽트
    vector_end:

    reset_handler:
        MRS r0, cpsr                    @CPSR을 R0에 복사
        BIC r1, r0, #0x1F               @CPSR 하위 5비트 초기화
        ORR r1, r1, #ARM_MODE_BIT_SVC   @SVC모드 비트 설정
        MSR cpsr, r1                    @수정된 값을 CPSR에 반영
        LDR sp, =SVC_STACK_TOP          @Supervisor 모드의 스택 포인터를 초기화

        MRS r0, cpsr
        BIC r1, r0, #0x1F
        ORR r1, r1, #ARM_MODE_BIT_IRQ
        MSR cpsr, r1
        LDR sp, =IRQ_STACK_TOP

        MRS r0, cpsr
        BIC r1, r0, #0x1F
        ORR r1, r1, #ARM_MODE_BIT_FIQ
        MSR cpsr, r1
        LDR sp, =FIQ_STACK_TOP

        MRS r0, cpsr
        BIC r1, r0, #0x1F
        ORR r1, r1, #ARM_MODE_BIT_ABT
        MSR cpsr, r1
        LDR sp, =ABT_STACK_TOP

        MRS r0, cpsr
        BIC r1, r0, #0x1F
        ORR r1, r1, #ARM_MODE_BIT_UND
        MSR cpsr, r1
        LDR sp, =UND_STACK_TOP

        MRS r0, cpsr
        BIC r1, r0, #0x1F
        ORR r1, r1, #ARM_MODE_BIT_SYS
        MSR cpsr, r1
        LDR sp, =USRSYS_STACK_TOP
        
        BL main

    dummy_handler:
        B .         @현재 주소로 무한 루프

.end
