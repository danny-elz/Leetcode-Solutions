//
// Created by Danny Elzein on 2025-02-14.
//
#include <iostream>
//
// The `romanToInt` function converts a Roman numeral string `s` to an integer.
//
// 1. Initialize an unordered map: `std::unordered_map<char, int> m` is used to store the Roman numerals and their corresponding integer values.
//    - The map `m` contains the following key-value pairs: {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}.
//
// 2. Initialize the result variable: `int res = 0` is used to store the final integer value.
//    - This variable will accumulate the total value of the Roman numeral as we process each character in the string.
//
// 3. Iterate through the string: A for loop runs from `0` to `s.length() - 1`.
//    - For each character `s[i]`, we will determine its value and decide whether to add or subtract it from the result.
//
// 4. Check the value of the current numeral: For each character `s[i]`, check if it is less than the next character `s[i + 1]`.
//    - If `s[i]` is less than `s[i + 1]`, it means that `s[i]` is part of a subtractive combination (e.g., IV, IX).
//      - In this case, subtract the value of `s[i]` from the result using `res -= m.at(s.at(i))`.
//    - If `s[i]` is not less than `s[i + 1]`, it means that `s[i]` is not part of a subtractive combination.
//      - In this case, add the value of `s[i]` to the result using `res += m.at(s.at(i))`.
//
// 5. Return the result: After the loop, return the final integer value `res`.
//    - The variable `res` now contains the integer representation of the Roman numeral string `s`.
//

int romanToInt(std::string s) {
    std::unordered_map<char, int> m = {{'I', 1},
                                       {'V', 5},
                                       {'X', 10},
                                       {'L', 50},
                                       {'C', 100},
                                       {'D', 500},
                                       {'M', 1000}};
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        if(i + 1 < s.length() && m.at(s.at(i)) < m.at(s.at(i + 1))) { // check if within bound of s and verify if leftmost numeral is smaller than the rightmost at index i
            res -= m.at(s.at(i));
        } else {
            res += m.at(s.at(i));
        }
    }
    return res;
}