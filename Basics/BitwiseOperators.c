#include <stdio.h>

int main() {
    // Bitwise operators in C
    // special operators that are used to perform operations on individual bits of an integer.
    // These operators are commonly used in low-level programming, such as device drivers and embedded systems.
    // knowing binary is important for this topic.
    int x = 5; // 00000101 in binary
    int y = 3; // 00000011 in binary

    int result_and = x & y;   // 00000001 (Binary) = 1 (Decimal)
    int result_or = x | y;    // 00000111 (Binary) = 7 (Decimal)
    int result_xor = x ^ y;   // 00000110 (Binary) = 6 (Decimal)
    int result_not_x = ~x;    // 11111010 (Binary) (Assuming 8-bit representation)
    int result_left_shift = x << 2; // 00010100 (Binary) = 20 (Decimal)
    int result_right_shift = x >> 1; // 00000010 (Binary) = 2 (Decimal)

    printf("%-20s: %d\n", "x", x);
    printf("%-20s: %d\n", "y", y);
    printf("%-20s: %d\n", "x & y (AND)", result_and);
    printf("%-20s: %d\n", "x | y (OR)", result_or);
    printf("%-20s: %d\n", "x ^ y (XOR)", result_xor);
    printf("%-20s: %d\n", "~x (NOT)", result_not_x);
    printf("%-20s: %d\n", "x << 2 (Left Shift)", result_left_shift);
    printf("%-20s: %d\n", "x >> 1 (Right Shift)", result_right_shift);

    return 0;
}