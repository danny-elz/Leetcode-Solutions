//
// Created by Danny Elzein on 2025-02-17.
//
#include <iostream>
//
// The `removeElement` function removes all instances of a specified value `val` from the given vector `nums` and returns the new length of the vector.
//
// 1. Initialize a variable `k`: `int k = 0` is used to keep track of the position where the next non-`val` element should be placed.
//    - This variable will also represent the new length of the vector after removing the specified value.
//
// 2. Iterate through the vector: A for loop runs from `0` to `nums.size() - 1`.
//    - For each element `nums[i]`, we will check if it is equal to `val`.
//
// 3. Check if the current element is not equal to `val`: Use `if (nums[i] != val)` to determine if the current element should be kept.
//    - If the current element is not equal to `val`, it means we want to keep it in the vector.
//      - Assign `nums[k] = nums[i]` to move the current element to the position `k`.
//      - Increment `k` by `1` to update the position for the next non-`val` element.
//
// 4. Return the new length: After the loop, return the value of `k`.
//    - The variable `k` now represents the new length of the vector after removing all instances of `val`.
//
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