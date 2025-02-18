//
// Created by Danny Elzein on 2025-02-14.
//
#include <vector>
//
// The `missingNumber` function finds the missing number in a given array `nums` containing `n` distinct numbers taken from the range `0` to `n`.
//
// 1. Initialize the size of the array: `int n = nums.size()`.
//    - `n` represents the number of elements in the array.
//
// 2. Initialize the missing number variable: `int missing = n`.
//    - `missing` is initially set to `n` because the missing number could be `n`.
//
// 3. Use a pointer to the missing number variable: `int *missingPtr = &missing`.
//    - This pointer allows us to modify the `missing` variable directly.
//
// 4. Iterate through the array using a for loop: `for (int i = 0; i < n; i++)`.
//    - For each element `i`, update the `missing` variable by adding the difference between the index `i` and the element `nums[i]`.
//      - This can be done using the pointer: `*missingPtr += (i - nums[i])`.
//
// 5. Return the missing number: After the loop, return the value of `*missingPtr`.
//    - The variable `missing` now represents the missing number in the array.
//
int missingNumber(std::vector<int> &nums) {
    int n = nums.size();
    int missing = n;
    int *missingPtr = &missing;
    for (int i = 0; i < n; i++) {
        *missingPtr += (i - nums[i]);
    }
    return *missingPtr;
};
