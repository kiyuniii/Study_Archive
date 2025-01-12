#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t value) {
    for (int i = 7; i >= 0; i--) { // 상위 비트부터 확인 (8비트)
        printf("%c", (value & (1 << i)) ? '1' : '0');
    }
    printf("\n");
}

int main() {
    uint8_t value = 0b00001111;
    
    /* 왼쪽 시프트 */
    uint8_t left_shifted_value = value << 2;
    printf("Left  shift(<<): %3u (0x%02X) ", left_shifted_value, left_shifted_value);
    print_binary(left_shifted_value);

    /* 오른쪽 시프트 */
    uint8_t right_shifted_value = value >> 2;
    printf("Right shift(>>): %3u (0x%02X) ", right_shifted_value, right_shifted_value);
    print_binary(right_shifted_value);
    return 0;
}
