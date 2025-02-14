//
// Created by Danny Elzein on 2025-02-14.
//
#include <vector>

int missingNumber(std::vector<int> &nums) {
    int n = nums.size();
    int missing = n;
    int *missingPtr = &missing;
    for (int i = 0; i < n; i++) {
        *missingPtr += (i - nums[i]);
    }
    return *missingPtr;
};
