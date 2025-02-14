//
// Created by Danny Elzein on 2025-02-14.
//
#include <iostream>

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