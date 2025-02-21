//
// Created by Danny Elzein on 2025-02-20.
//
#include <iostream>
bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_map<int, int> map;
    for(int num : nums) {
        map[num]++;
    }
    for(const auto& pair: map)
        if(pair.second > 1) {
            return true;
        }
    return false;
}