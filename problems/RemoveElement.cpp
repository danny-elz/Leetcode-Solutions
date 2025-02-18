//
// Created by Danny Elzein on 2025-02-17.
//
#include <iostream>
int removeElement(std::vector<int> &nums, int val) {
    int k = 0;
    for (int i = 0 ; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }

    }
    return k;
};