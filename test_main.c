#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

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
    printf("Test: Reverse positive number (5211)... ");
    int result = reverse_number(5211);
    assert(result == 1125);
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

void test_reverse_two_digit_number() {
    printf("Test: Reverse two digit number (42)... ");
    int result = reverse_number(42);
    assert(result == 24);
    printf("PASSED\n");
}

void test_reverse_palindrome_number() {
    printf("Test: Reverse palindrome number (121)... ");
    int result = reverse_number(121);
    assert(result == 121);
    printf("PASSED\n");
}

void test_reverse_number_ending_in_zero() {
    printf("Test: Reverse number ending in zero (100)... ");
    int result = reverse_number(100);
    assert(result == 1);
    printf("PASSED\n");
}

void test_reverse_three_digit_number() {
    printf("Test: Reverse three digit number (456)... ");
    int result = reverse_number(456);
    assert(result == 654);
    printf("PASSED\n");
}

void test_reverse_negative_single_digit() {
    printf("Test: Reverse negative single digit (-7)... ");
    int result = reverse_number(-7);
    assert(result == -7);
    printf("PASSED\n");
}

void test_reverse_negative_with_trailing_zeros() {
    printf("Test: Reverse negative with trailing zeros (-3400)... ");
    int result = reverse_number(-3400);
    assert(result == -43);
    printf("PASSED\n");
}

void test_reverse_max_int_boundary() {
    printf("Test: Reverse number near max int boundary (1463847412)... ");
    int result = reverse_number(1463847412);
    assert(result == 2147483641);
    printf("PASSED\n");
}

void test_reverse_min_int_boundary() {
    printf("Test: Reverse number near min int boundary (-1463847412)... ");
    int result = reverse_number(-1463847412);
    assert(result == -2147483641);
    printf("PASSED\n");
}

void test_reverse_all_same_digits() {
    printf("Test: Reverse all same digits (7777)... ");
    int result = reverse_number(7777);
    assert(result == 7777);
    printf("PASSED\n");
}

void test_reverse_alternating_digits() {
    printf("Test: Reverse alternating digits (1010)... ");
    int result = reverse_number(1010);
    assert(result == 101);
    printf("PASSED\n");
}

void test_reverse_nine() {
    printf("Test: Reverse nine (9)... ");
    int result = reverse_number(9);
    assert(result == 9);
    printf("PASSED\n");
}

void test_reverse_ten() {
    printf("Test: Reverse ten (10)... ");
    int result = reverse_number(10);
    assert(result == 1);
    printf("PASSED\n");
}

int main() {
    printf("=== Running Unit Tests for Number Reversal ===\n\n");

    int tests_passed = 0;
    int tests_failed = 0;

    test_reverse_positive_number();
    tests_passed++;
    test_reverse_single_digit();
    tests_passed++;
    test_reverse_zero();
    tests_passed++;
    test_reverse_negative_number();
    tests_passed++;
    test_reverse_number_with_trailing_zeros();
    tests_passed++;
    test_reverse_large_positive_number();
    tests_passed++;
    test_reverse_two_digit_number();
    tests_passed++;
    test_reverse_palindrome_number();
    tests_passed++;
    test_reverse_number_ending_in_zero();
    tests_passed++;
    test_reverse_three_digit_number();
    tests_passed++;
    test_reverse_negative_single_digit();
    tests_passed++;
    test_reverse_negative_with_trailing_zeros();
    tests_passed++;
    test_reverse_max_int_boundary();
    tests_passed++;
    test_reverse_min_int_boundary();
    tests_passed++;
    test_reverse_all_same_digits();
    tests_passed++;
    test_reverse_alternating_digits();
    tests_passed++;
    test_reverse_nine();
    tests_passed++;
    test_reverse_ten();
    tests_passed++;

    printf("\n=== Test Summary ===\n");
    printf("Tests Passed: %d\n", tests_passed);
    printf("Tests Failed: %d\n", tests_failed);
    printf("Total Tests: %d\n", tests_passed + tests_failed);

    if (tests_failed == 0) {
        printf("\nAll tests passed successfully!\n");
        return 0;
    } else {
        printf("\nSome tests failed!\n");
        return 1;
    }
}
