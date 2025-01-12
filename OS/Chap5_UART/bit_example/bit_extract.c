#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t value) {
    for (int i = 7; i >= 0; i--) { // 상위 비트부터 확인 (8비트)
        printf("%c", (value & (1 << i)) ? '1' : '0');
    }
    printf("\n");
}

int main() {
    uint8_t value = 0b10101101;
    printf("Origin : %3u (0x%02X) ", value, value);
    print_binary(value);

    uint8_t bit_0 = value & 0x1;
    printf("bit_0: %u\n", bit_0);
    uint8_t bit_1 = (value >> 1) & 0x1;
    printf("bit_1: %u\n", bit_1);
    uint8_t bit_2 = (value >> 2) & 0x1;
    printf("bit_2: %u\n", bit_2);
    uint8_t bit_3 = (value >> 3) & 0x1;
    printf("bit_3: %u\n", bit_3);
    uint8_t bit_4 = (value >> 4) & 0x1;
    printf("bit_4: %u\n", bit_4);
    uint8_t bit_5 = (value >> 5) & 0x1;
    printf("bit_5: %u\n", bit_5);
    uint8_t bit_6 = (value >> 6) & 0x1;
    printf("bit_6: %u\n", bit_6);
    uint8_t bit_7 = (value >> 7) & 0x1;
    printf("bit_7: %u\n", bit_7);

    printf("==================\n");
    print_binary(value);
    return 0;
}