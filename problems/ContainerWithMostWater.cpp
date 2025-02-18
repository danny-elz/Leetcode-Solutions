//
// Created by Danny Elzein on 2025-02-15.
//
#include <iostream>
//
// The `maxArea` function calculates the maximum area of water that can be contained between two lines in the given vector `height`.
//
// 1. Initialize two pointers: `int l = 0` and `int r = height.size() - 1`.
//    - `l` points to the beginning of the vector, and `r` points to the end of the vector.
//
// 2. Initialize the result variable: `int res = 0` is used to store the maximum area found so far.
//
// 3. Iterate through the vector using a while loop: `while (l < r)`.
//    - The loop continues until the two pointers meet.
//
// 4. Calculate the area: For each pair of lines pointed to by `l` and `r`, calculate the area as `(r - l) * std::min(height[l], height[r])`.
//    - The width of the container is `r - l`.
//    - The height of the container is the minimum of the two heights `height[l]` and `height[r]`.
//
// 5. Update the result: Use `res = std::max(res, area)` to update the maximum area found so far.
//
// 6. Move the pointers: Depending on the heights of the lines, move the pointers to try to find a larger area.
//    - If `height[l] < height[r]`, increment `l` to move the left pointer to the right.
//    - If `height[l] >= height[r]`, decrement `r` to move the right pointer to the left.
//
// 7. Return the result: After the loop, return the maximum area found `res`.
//
int maxArea(std::vector<int>& height) {
    int l = 0;
    int r = height.size() - 1;
    int res;

    while(l < r) {
        int area = (r - l) * std::min(height[l], height[r]);
        res = std::max(res, area);
        if(height[l] < height[r]) {
            l++;
        } else if (height[l] > height[r]) { // we could get rid of this block however I'll leave it for clarity
            r--;
        } else
            r--;
    }
    return res;
}
