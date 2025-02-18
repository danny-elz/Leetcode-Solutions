//
// Created by Danny Elzein on 2025-02-14.
//
#include <vector>
//
// The `search` function performs a binary search on a sorted vector `nums` to find the target value `target`.
//
// 1. Initialize two pointers: `int left = 0` and `int right = nums.size() - 1`.
//    - `left` points to the beginning of the vector, and `right` points to the end of the vector.
//
// 2. Iterate through the vector using a while loop: `while (left <= right)`.
//    - The loop continues until the two pointers meet.
//
// 3. Calculate the middle point: For each iteration, calculate the middle point `middle` as `left + (right - left) / 2`.
//    - This helps to avoid overflow that can occur with `(left + right) / 2`.
//
// 4. Compare the middle point value with the target:
//    - If `target == nums[middle]`, it means the target is found at index `middle`.
//      - Return `middle` as the result.
//    - If `target < nums[middle]`, it means the target is in the left half of the range.
//      - Update `right` to `middle - 1` to search in the left half of the range.
//    - If `target > nums[middle]`, it means the target is in the right half of the range.
//      - Update `left` to `middle + 1` to search in the right half of the range.
//
// 5. Return `-1` if the target is not found: After the loop, if the target is not found, return `-1`.
//
int search(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (target == nums[middle]) {
            return middle;
        } else if (target < nums[middle]) {
            right = middle - 1;
        } else if (target > nums[middle]) {
            left = middle + 1;
        } else {
            return middle;
        }
    }
    return -1;
}
