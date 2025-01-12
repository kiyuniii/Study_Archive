#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t value) {
    for (int i = 7; i >= 0; i--) { // 상위 비트부터 확인 (8비트)
        printf("%c", (value & (1 << i)) ? '1' : '0');
    }
    printf("\n");
}

int main() {
    uint8_t ch = 0x1C;
    printf("%3u (0x%02X) ", ch, ch);
    print_binary(ch);
    printf("%3u (0x%02X) ", ch & 0x0F, ch & 0x0F);  //상위 4비트 = 0000
    print_binary(ch & 0x0F);                        //하위 4비트 = 그대로 저장
    printf("%3u (0x%02X) ", ch & 0xFF, ch & 0xFF);  //상위 4비트 = 그대로 저장
    print_binary(ch & 0xFF);                        //하위 4비트 = 그대로 저장

    return 0;   
}