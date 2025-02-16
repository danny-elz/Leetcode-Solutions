//
// Created by Danny Elzein on 2025-02-15.
//
#include <vector>

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
