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

void test_reverse_positive_number() {
    printf("Test: Reverse positive number (123)... ");
    int result = reverse_number(123);
    assert(result == 321);
    printf("PASSED\n");
}

void test_reverse_single_digit() {
    printf("Test: Reverse single digit (5)... ");
    int result = reverse_number(5);
    assert(result == 5);
    printf("PASSED\n");
}

void test_reverse_zero() {
    printf("Test: Reverse zero (0)... ");
    int result = reverse_number(0);
    assert(result == 0);
    printf("PASSED\n");
}

void test_reverse_negative_number() {
    printf("Test: Reverse negative number (-123)... ");
    int result = reverse_number(-123);
    assert(result == -321);
    printf("PASSED\n");
}

void test_reverse_number_with_trailing_zeros() {
    printf("Test: Reverse number with trailing zeros (1200)... ");
    int result = reverse_number(1200);
    assert(result == 21);
    printf("PASSED\n");
}

void test_reverse_large_positive_number() {
    printf("Test: Reverse large positive number (987654321)... ");
    int result = reverse_number(987654321);
    assert(result == 123456789);
    printf("PASSED\n");
}

void test_reverse_large_negative_number() {
    printf("Test: Reverse large negative number (-987654321)... ");
    int result = reverse_number(-987654321);
    assert(result == -123456789);
    printf("PASSED\n");
}

void test_reverse_number_all_same_digits() {
    printf("Test: Reverse number with all same digits (7777)... ");
    int result = reverse_number(7777);
    assert(result == 7777);
    printf("PASSED\n");
}

void test_reverse_two_digit_number() {
    printf("Test: Reverse two digit number (42)... ");
    int result = reverse_number(42);
    assert(result == 24);
    printf("PASSED\n");
}

void test_reverse_palindrome_number() {
    printf("Test: Reverse palindrome number (12321)... ");
    int result = reverse_number(12321);
    assert(result == 12321);
    printf("PASSED\n");
}

void test_reverse_number_ending_with_zero() {
    printf("Test: Reverse number ending with zero (100)... ");
    int result = reverse_number(100);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_number_multiple_trailing_zeros() {
    printf("Test: Reverse number with multiple trailing zeros (50000)... ");
    int result = reverse_number(50000);
    assert(result == 5);
    printf("PASSED\n");
}

void test_reverse_number_from_readme_example() {
    printf("Test: Reverse number from README example (5211)... ");
    int result = reverse_number(5211);
    assert(result == 1125);
    printf("PASSED\n");
}

void test_reverse_small_negative() {
    printf("Test: Reverse small negative number (-5)... ");
    int result = reverse_number(-5);
    assert(result == -5);
    printf("PASSED\n");
}

void test_reverse_number_with_leading_zeros_effect() {
    printf("Test: Reverse number resulting in leading zeros (1000)... ");
    int result = reverse_number(1000);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_three_digit_number() {
    printf("Test: Reverse three digit number (456)... ");
    int result = reverse_number(456);
    assert(result == 654);
    printf("PASSED\n");
}

void test_reverse_four_digit_number() {
    printf("Test: Reverse four digit number (1234)... ");
    int result = reverse_number(1234);
    assert(result == 4321);
    printf("PASSED\n");
}

void test_reverse_five_digit_number() {
    printf("Test: Reverse five digit number (98765)... ");
    int result = reverse_number(98765);
    assert(result == 56789);
    printf("PASSED\n");
}

void test_reverse_negative_with_trailing_zeros() {
    printf("Test: Reverse negative number with trailing zeros (-3400)... ");
    int result = reverse_number(-3400);
    assert(result == -43);
    printf("PASSED\n");
}

void test_reverse_max_safe_positive() {
    printf("Test: Reverse max safe positive number (1463847412)... ");
    int result = reverse_number(1463847412);
    assert(result == 2147483641);
    printf("PASSED\n");
}

void test_reverse_alternating_digits() {
    printf("Test: Reverse alternating digits (13579)... ");
    int result = reverse_number(13579);
    assert(result == 97531);
    printf("PASSED\n");
}

void test_reverse_number_10() {
    printf("Test: Reverse number 10... ");
    int result = reverse_number(10);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_number_99() {
    printf("Test: Reverse number 99... ");
    int result = reverse_number(99);
    assert(result == 99);
    printf("PASSED\n");
}

int main() {
    printf("=== Running Unit Tests for main.c ===\n\n");

    test_reverse_positive_number();
    test_reverse_single_digit();
    test_reverse_zero();
    test_reverse_negative_number();
    test_reverse_number_with_trailing_zeros();
    test_reverse_large_positive_number();
    test_reverse_large_negative_number();
    test_reverse_number_all_same_digits();
    test_reverse_two_digit_number();
    test_reverse_palindrome_number();
    test_reverse_number_ending_with_zero();
    test_reverse_number_multiple_trailing_zeros();
    test_reverse_number_from_readme_example();
    test_reverse_small_negative();
    test_reverse_number_with_leading_zeros_effect();
    test_reverse_three_digit_number();
    test_reverse_four_digit_number();
    test_reverse_five_digit_number();
    test_reverse_negative_with_trailing_zeros();
    test_reverse_max_safe_positive();
    test_reverse_alternating_digits();
    test_reverse_number_10();
    test_reverse_number_99();

    printf("\n=== All Tests Passed! ===\n");
    return 0;
}
