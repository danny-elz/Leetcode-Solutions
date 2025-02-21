//
// Created by Danny Elzein on 2025-02-19.
//
// The `canJump` function determines if you can reach the last index of the array starting from the first index.
//
// 1. Initialize the `post` variable:
//    - `int post = nums.size() - 1;` initializes `post` to the last index of the array. This variable keeps track of the farthest index that can be reached.
//
// 2. Iterate from the end to the beginning of the array:
//    - Use a for loop `for (int i = nums.size() - 1; i >= 0; i--)` to move from the last index to the first index.
//
// 3. Check if the current index can reach or exceed `post`:
//    - Inside the loop, use the condition `if (i + nums[i] >= post)` to check if the current index `i` plus the maximum jump length from that index (`nums[i]`) can reach or exceed the `post` index.
//
// 4. Update `post` if the condition is true:
//    - If the condition is true, update `post` to the current index `post = i;`.
//
// 5. Return the result:
//    - After the loop, return `true` if `post` is 0, indicating that you can reach the last index starting from the first index. Otherwise, return `false`.
//
#include <iostream>
bool canJump(std::vector<int>& nums) {
    int post = nums.size() - 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if(i + nums[i] >= post) {
            post = i;
        }
    }
    return (post == 0);
}
