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
    printf("Test: Reverse positive number (5211)...\n");
    int result = reverse_number(5211);
    assert(result == 1125);
    printf("PASSED\n");
}

void test_reverse_single_digit() {
    printf("Test: Reverse single digit (5)...\n");
    int result = reverse_number(5);
    assert(result == 5);
    printf("PASSED\n");
}

void test_reverse_zero() {
    printf("Test: Reverse zero (0)...\n");
    int result = reverse_number(0);
    assert(result == 0);
    printf("PASSED\n");
}

void test_reverse_negative_number() {
    printf("Test: Reverse negative number (-123)...\n");
    int result = reverse_number(-123);
    assert(result == -321);
    printf("PASSED\n");
}

void test_reverse_number_with_trailing_zeros() {
    printf("Test: Reverse number with trailing zeros (1200)...\n");
    int result = reverse_number(1200);
    assert(result == 21);
    printf("PASSED\n");
}

void test_reverse_two_digit_number() {
    printf("Test: Reverse two digit number (42)...\n");
    int result = reverse_number(42);
    assert(result == 24);
    printf("PASSED\n");
}

void test_reverse_three_digit_number() {
    printf("Test: Reverse three digit number (123)...\n");
    int result = reverse_number(123);
    assert(result == 321);
    printf("PASSED\n");
}

void test_reverse_four_digit_number() {
    printf("Test: Reverse four digit number (9876)...\n");
    int result = reverse_number(9876);
    assert(result == 6789);
    printf("PASSED\n");
}

void test_reverse_palindrome_number() {
    printf("Test: Reverse palindrome number (121)...\n");
    int result = reverse_number(121);
    assert(result == 121);
    printf("PASSED\n");
}

void test_reverse_large_positive_number() {
    printf("Test: Reverse large positive number (123456)...\n");
    int result = reverse_number(123456);
    assert(result == 654321);
    printf("PASSED\n");
}

void test_reverse_negative_single_digit() {
    printf("Test: Reverse negative single digit (-7)...\n");
    int result = reverse_number(-7);
    assert(result == -7);
    printf("PASSED\n");
}

void test_reverse_negative_two_digit() {
    printf("Test: Reverse negative two digit (-45)...\n");
    int result = reverse_number(-45);
    assert(result == -54);
    printf("PASSED\n");
}

void test_reverse_number_ending_in_zero() {
    printf("Test: Reverse number ending in zero (100)...\n");
    int result = reverse_number(100);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_number_all_same_digits() {
    printf("Test: Reverse number with all same digits (777)...\n");
    int result = reverse_number(777);
    assert(result == 777);
    printf("PASSED\n");
}

void test_reverse_number_alternating_digits() {
    printf("Test: Reverse number with alternating digits (1010)...\n");
    int result = reverse_number(1010);
    assert(result == 101);
    printf("PASSED\n");
}

void test_reverse_max_single_digit() {
    printf("Test: Reverse max single digit (9)...\n");
    int result = reverse_number(9);
    assert(result == 9);
    printf("PASSED\n");
}

void test_reverse_min_single_digit() {
    printf("Test: Reverse min single digit (1)...\n");
    int result = reverse_number(1);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_number_with_multiple_trailing_zeros() {
    printf("Test: Reverse number with multiple trailing zeros (12000)...\n");
    int result = reverse_number(12000);
    assert(result == 21);
    printf("PASSED\n");
}

void test_reverse_negative_with_trailing_zeros() {
    printf("Test: Reverse negative number with trailing zeros (-1200)...\n");
    int result = reverse_number(-1200);
    assert(result == -21);
    printf("PASSED\n");
}

void test_reverse_ascending_digits() {
    printf("Test: Reverse ascending digits (12345)...\n");
    int result = reverse_number(12345);
    assert(result == 54321);
    printf("PASSED\n");
}

void test_reverse_descending_digits() {
    printf("Test: Reverse descending digits (54321)...\n");
    int result = reverse_number(54321);
    assert(result == 12345);
    printf("PASSED\n");
}

void test_reverse_number_10() {
    printf("Test: Reverse number 10...\n");
    int result = reverse_number(10);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_number_negative_10() {
    printf("Test: Reverse number -10...\n");
    int result = reverse_number(-10);
    assert(result == -1);
    printf("PASSED\n");
}

void test_reverse_number_99() {
    printf("Test: Reverse number 99...\n");
    int result = reverse_number(99);
    assert(result == 99);
    printf("PASSED\n");
}

void test_reverse_number_1001() {
    printf("Test: Reverse number 1001...\n");
    int result = reverse_number(1001);
    assert(result == 1001);
    printf("PASSED\n");
}

void test_reverse_number_with_leading_digit_9() {
    printf("Test: Reverse number with leading digit 9 (9876543)...\n");
    int result = reverse_number(9876543);
    assert(result == 3456789);
    printf("PASSED\n");
}

void test_reverse_negative_large_number() {
    printf("Test: Reverse negative large number (-987654)...\n");
    int result = reverse_number(-987654);
    assert(result == -456789);
    printf("PASSED\n");
}

void test_reverse_number_2() {
    printf("Test: Reverse number 2...\n");
    int result = reverse_number(2);
    assert(result == 2);
    printf("PASSED\n");
}

void test_reverse_number_negative_2() {
    printf("Test: Reverse number -2...\n");
    int result = reverse_number(-2);
    assert(result == -2);
    printf("PASSED\n");
}

void test_reverse_number_1000() {
    printf("Test: Reverse number 1000...\n");
    int result = reverse_number(1000);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_number_negative_1000() {
    printf("Test: Reverse number -1000...\n");
    int result = reverse_number(-1000);
    assert(result == -1);
    printf("PASSED\n");
}

int main() {
    printf("=== Running Unit Tests for Number Reversal ===\n\n");

    test_reverse_positive_number();
    test_reverse_single_digit();
    test_reverse_zero();
    test_reverse_negative_number();
    test_reverse_number_with_trailing_zeros();
    test_reverse_two_digit_number();
    test_reverse_three_digit_number();
    test_reverse_four_digit_number();
    test_reverse_palindrome_number();
    test_reverse_large_positive_number();
    test_reverse_negative_single_digit();
    test_reverse_negative_two_digit();
    test_reverse_number_ending_in_zero();
    test_reverse_number_all_same_digits();
    test_reverse_number_alternating_digits();
    test_reverse_max_single_digit();
    test_reverse_min_single_digit();
    test_reverse_number_with_multiple_trailing_zeros();
    test_reverse_negative_with_trailing_zeros();
    test_reverse_ascending_digits();
    test_reverse_descending_digits();
    test_reverse_number_10();
    test_reverse_number_negative_10();
    test_reverse_number_99();
    test_reverse_number_1001();
    test_reverse_number_with_leading_digit_9();
    test_reverse_negative_large_number();
    test_reverse_number_2();
    test_reverse_number_negative_2();
    test_reverse_number_1000();
    test_reverse_number_negative_1000();

    printf("\n=== All Tests Passed! ===\n");
    return 0;
}
