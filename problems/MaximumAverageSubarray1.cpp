//
// Created by Danny Elzein on 2025-02-21.
//
#include <iostream>
double findMaxAverage(std::vector<int>& nums, int k) {
    int n = nums.size();
    double sum = 0;
    double res = 0;
    if(nums.size() == 1) {
        return nums[0];
    }
    for(int i = 0; i < k; i++) {
        sum+=nums[i];
    }
    res = sum;
    for(int i = k; i < n; i++) {
        sum += nums[i] - nums[i - k];
        res = std::max(res, sum);
;    }
    return res / k;
}