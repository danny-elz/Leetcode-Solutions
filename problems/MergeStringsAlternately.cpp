//
// Created by Danny Elzein on 2025-02-18.
//
#include <iostream>
//
// The `mergeAlternately` function merges two strings `word1` and `word2` by alternating characters from each string.
//
// 1. Initialize pointers and lengths:
//    - `int p1 = 0` and `int p2 = 0` are pointers for `word1` and `word2` respectively.
//    - `int len1 = word1.size()` and `int len2 = word2.size()` store the lengths of the strings.
//
// 2. Initialize the result string: `std::string res` will store the merged result.
//
// 3. Iterate through both strings using a while loop: `while(p1 < word1.size() || p2 < word2.size())`.
//    - The loop continues until all characters from both strings are processed.
//
// 4. Append characters from `word1` and `word2` alternately:
//    - If `p1 < len1`, append `word1[p1++]` to `res`.
//    - If `p2 < len2`, append `word2[p2++]` to `res`.
//
// 5. Return the result string: After the loop, return `res` which contains the merged string.
//
std::string mergeAlternately(std::string word1, std::string word2) {
    int p1 = 0;
    int p2 = 0;
    int len1 = word1.size();
    int len2 = word2.size();
    std::string res;

    while(p1 < word1.size() || p2 < word2.size()) {
        if(p1 < len1) res += word1[p1++];
        if(p2 < len2) res += word2[p2++];
    }
    return res;
}