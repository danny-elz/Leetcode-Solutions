//
// Created by Danny Elzein on 2025-02-17.
//
#include <iostream>
//
// The `twoSum` function aims to find two numbers in the given vector `nums` that add up to a specified `target`.
// It returns the indices of these two numbers.
//
// 1. Initialize an unordered map: `std::unordered_map<int, int> m;` is used to store the numbers and their indices as we iterate through the vector.
//
// 2. Iterate through the vector: A for loop runs from `0` to `n-1` (where `n` is the size of the vector).
//
// 3. Calculate the complement: For each element `nums[i]`, calculate the complement as `target - nums[i]`.
//
// 4. Check if the complement exists in the map: Use `if (m.count(complement))` to check if the complement is already in the map.
//    If it is, it means we have found the two numbers that add up to the target.
//
// 5. Return the indices: If the complement is found, return the indices of the complement and the current element as a vector `{m[complement], i}`.
//
// 6. Update the map: If the complement is not found, add the current element and its index to the map using `m[nums[i]] = i`.
//
// 7. Return an empty vector: If no such pair is found by the end of the loop, return an empty vector `{}`.
//

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> m;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (m.count(complement)) {
            return {m[complement], i};
        }
        m[nums[i]] = i;
    }
    return {};
}