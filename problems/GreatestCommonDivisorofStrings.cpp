//
// Created by Danny Elzein on 2025-02-18.
//
#include <iostream>
//
// The `gcdOfStrings` function finds the greatest common divisor (GCD) of two strings.
//
// 1. Check if concatenating the strings in different orders results in the same string:
//    - If `str1 + str2` is not equal to `str2 + str1`, return an empty string because there is no common divisor.
//
// 2. Define a lambda function `gcd` to calculate the GCD of two lengths using the Euclidean algorithm:
//    - The lambda function takes two integers `len1` and `len2` as parameters.
//    - It uses a `while` loop to repeatedly calculate the remainder of `len1` divided by `len2` until `len2` becomes zero.
//    - The function returns `len1` as the GCD.
//
// 3. Calculate the GCD of the lengths of `str1` and `str2`:
//    - Call the `gcd` lambda function with `str1.length()` and `str2.length()` as arguments.
//    - Store the result in the variable `res`.
//
// 4. Return the substring of `str1` from the beginning to the length of the GCD:
//    - Use `str1.substr(0, res)` to get the substring and return it.
//
std::string gcdOfStrings(std::string str1, std::string str2) {
    if(str1 + str2 != str2 + str1)
        return "";

    auto gcd = [](int len1, int len2) {
        while (len2 != 0) {
            int temp = len1 % len2;
            len1 = len2;
            len2 = temp;

        }
        return len1;
    };

    int res = gcd(str1.length(), str2.length());
    return str1.substr(0, res);
}