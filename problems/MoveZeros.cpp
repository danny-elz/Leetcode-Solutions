//
// Created by Danny Elzein on 2025-02-20.
//
#include <iostream>
void moveZeroes(std::vector<int>& nums) {
    int nonzero = 0;
    for (int i = 0; i< nums.size(); i++) {
        if(nums[i] != nonzero) {
            std::swap(nums[i], nums[nonzero]);
            nonzero++;
        }
    }
}
