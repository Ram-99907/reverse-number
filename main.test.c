#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int reverse_number(int num) {
    int reverse = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    return reverse;
}

void test_reverse_positive_single_digit() {
    printf("Test: Reverse positive single digit number\n");
    assert(reverse_number(5) == 5);
    assert(reverse_number(0) == 0);
    assert(reverse_number(9) == 9);
    printf("PASSED\n\n");
}

void test_reverse_positive_multi_digit() {
    printf("Test: Reverse positive multi-digit number\n");
    assert(reverse_number(123) == 321);
    assert(reverse_number(5211) == 1125);
    assert(reverse_number(1234) == 4321);
    assert(reverse_number(9876) == 6789);
    printf("PASSED\n\n");
}

void test_reverse_number_with_trailing_zeros() {
    printf("Test: Reverse number with trailing zeros\n");
    assert(reverse_number(100) == 1);
    assert(reverse_number(1000) == 1);
    assert(reverse_number(1200) == 21);
    assert(reverse_number(1230) == 321);
    printf("PASSED\n\n");
}

void test_reverse_negative_numbers() {
    printf("Test: Reverse negative numbers\n");
    assert(reverse_number(-123) == -321);
    assert(reverse_number(-5211) == -1125);
    assert(reverse_number(-1) == -1);
    assert(reverse_number(-100) == -1);
    printf("PASSED\n\n");
}

void test_reverse_palindrome_numbers() {
    printf("Test: Reverse palindrome numbers\n");
    assert(reverse_number(121) == 121);
    assert(reverse_number(1221) == 1221);
    assert(reverse_number(12321) == 12321);
    printf("PASSED\n\n");
}

void test_reverse_large_numbers() {
    printf("Test: Reverse large numbers\n");
    assert(reverse_number(123456) == 654321);
    assert(reverse_number(987654321) == 123456789);
    printf("PASSED\n\n");
}

void test_reverse_edge_case_zero() {
    printf("Test: Edge case - zero\n");
    assert(reverse_number(0) == 0);
    printf("PASSED\n\n");
}

void test_reverse_numbers_with_leading_zeros_after_reverse() {
    printf("Test: Numbers that have leading zeros after reversal\n");
    assert(reverse_number(10) == 1);
    assert(reverse_number(20) == 2);
    assert(reverse_number(100) == 1);
    assert(reverse_number(1000) == 1);
    printf("PASSED\n\n");
}

void test_reverse_two_digit_numbers() {
    printf("Test: Two digit numbers\n");
    assert(reverse_number(12) == 21);
    assert(reverse_number(23) == 32);
    assert(reverse_number(99) == 99);
    assert(reverse_number(10) == 1);
    printf("PASSED\n\n");
}

void test_reverse_three_digit_numbers() {
    printf("Test: Three digit numbers\n");
    assert(reverse_number(100) == 1);
    assert(reverse_number(101) == 101);
    assert(reverse_number(123) == 321);
    assert(reverse_number(999) == 999);
    printf("PASSED\n\n");
}

void test_reverse_four_digit_numbers() {
    printf("Test: Four digit numbers\n");
    assert(reverse_number(1000) == 1);
    assert(reverse_number(1234) == 4321);
    assert(reverse_number(5678) == 8765);
    assert(reverse_number(9999) == 9999);
    printf("PASSED\n\n");
}

void test_reverse_negative_single_digit() {
    printf("Test: Negative single digit\n");
    assert(reverse_number(-1) == -1);
    assert(reverse_number(-5) == -5);
    assert(reverse_number(-9) == -9);
    printf("PASSED\n\n");
}

void test_reverse_negative_multi_digit() {
    printf("Test: Negative multi-digit\n");
    assert(reverse_number(-12) == -21);
    assert(reverse_number(-123) == -321);
    assert(reverse_number(-1234) == -4321);
    printf("PASSED\n\n");
}

void test_reverse_negative_with_trailing_zeros() {
    printf("Test: Negative numbers with trailing zeros\n");
    assert(reverse_number(-100) == -1);
    assert(reverse_number(-1000) == -1);
    assert(reverse_number(-1200) == -21);
    printf("PASSED\n\n");
}

void test_reverse_boundary_values() {
    printf("Test: Boundary values\n");
    assert(reverse_number(1) == 1);
    assert(reverse_number(-1) == -1);
    assert(reverse_number(10) == 1);
    assert(reverse_number(-10) == -1);
    printf("PASSED\n\n");
}

void test_reverse_consecutive_numbers() {
    printf("Test: Consecutive numbers\n");
    assert(reverse_number(12345) == 54321);
    assert(reverse_number(123456789) == 987654321);
    printf("PASSED\n\n");
}

void test_reverse_repeated_digits() {
    printf("Test: Numbers with repeated digits\n");
    assert(reverse_number(111) == 111);
    assert(reverse_number(222) == 222);
    assert(reverse_number(1111) == 1111);
    assert(reverse_number(1212) == 2121);
    printf("PASSED\n\n");
}

void test_reverse_mixed_patterns() {
    printf("Test: Mixed digit patterns\n");
    assert(reverse_number(102030) == 30201);
    assert(reverse_number(10203) == 30201);
    assert(reverse_number(50607) == 70605);
    printf("PASSED\n\n");
}

int main() {
    printf("=== Running Comprehensive Tests for Number Reversal ===\n\n");

    test_reverse_positive_single_digit();
    test_reverse_positive_multi_digit();
    test_reverse_number_with_trailing_zeros();
    test_reverse_negative_numbers();
    test_reverse_palindrome_numbers();
    test_reverse_large_numbers();
    test_reverse_edge_case_zero();
    test_reverse_numbers_with_leading_zeros_after_reverse();
    test_reverse_two_digit_numbers();
    test_reverse_three_digit_numbers();
    test_reverse_four_digit_numbers();
    test_reverse_negative_single_digit();
    test_reverse_negative_multi_digit();
    test_reverse_negative_with_trailing_zeros();
    test_reverse_boundary_values();
    test_reverse_consecutive_numbers();
    test_reverse_repeated_digits();
    test_reverse_mixed_patterns();

    printf("=== All Tests Passed Successfully! ===\n");
    return 0;
}
