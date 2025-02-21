//
// Created by Danny Elzein on 2025-02-20.
//
#include <iostream>
bool isSubsequence(std::string s, std::string t) {
    int s_ptr = 0;
    for (int t_ptr = 0; t_ptr < t.size(); t_ptr++) {
        if (s_ptr < s.size() && s.at(s_ptr) == t.at(t_ptr))
            s_ptr++;
    }
    return s_ptr == s.size();
}