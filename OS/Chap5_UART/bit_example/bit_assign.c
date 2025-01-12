#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t value) {
    for (int i = 7; i >= 0; i--) { // 상위 비트부터 확인 (8비트)
        printf("%c", (value & (1 << i)) ? '1' : '0');
    }
    printf("\n");
}

int main() {
    uint8_t value = 0b00000000;
    printf("Origin: %3u (0x%02X) ", value, value);
    print_binary(value);

    value |= (1 << 2); 
    printf("Result(1 << 2): %3u (0x%02X) ", value, value);
    print_binary(value);

    value |= (1 << 4); 
    printf("Result(1 << 4): %3u (0x%02X) ", value, value);
    print_binary(value);

    value |= (1 << 6); 
    printf("Result(1 << 6): %3u (0x%02X) ", value, value);
    print_binary(value);

    value |= (1 << 3); 
    printf("Result(1 << 3): %3u (0x%02X) ", value, value);
    print_binary(value);

    value |= (1 << 4);
    printf("Result(1 << 4): %3u (0x%02X) ", value, value);
    print_binary(value);

    value |= (0 << 3); // |= 는 비트 OR 연산이므로 0은 아무 변화가 없다.
    printf("Result(0 << 3): %3u (0x%02X) ", value, value);
    print_binary(value);

    value &= ~(1 << 3); // 01011100 & ~00000100 = 01011100
    printf("Result(0 << 3): %3u (0x%02X) ", value, value);
    print_binary(value);

    value &= (0 << 3); // 01011100 & 00000000 = 00000000 -> Reset
    printf("Result(0 << 3): %3u (0x%02X) ", value, value);
    print_binary(value);

    return 0;
}