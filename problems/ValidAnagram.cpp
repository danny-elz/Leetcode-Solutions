//
// Created by Danny Elzein on 2025-02-20.
//
#include <iostream>

bool isAnagram(std::string s, std::string t) {
    std::unordered_map<char, int> s_map;
    std::unordered_map<char, int> t_map;

    if(s.size() != t.size())
        return false;

    for(int i = 0; i < s.size(); i++) {
        s_map[s.at(i)]++;
        t_map[t.at(i)]++;
    }

    for(auto &entry : s_map) {
        char c = entry.first;
        if(s_map[c] != t_map[c])
            return false;
    }
    return true;
}