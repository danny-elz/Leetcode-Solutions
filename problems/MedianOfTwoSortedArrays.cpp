//
// Created by Danny Elzein on 2025-02-16.
//
#include <vector>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    for(int n: nums2) {
        nums1.push_back(n);
    }
    std::sort(std::begin(nums1), std::end(nums1));
    int l = 0;
    int r = nums1.size() - 1;

    if(nums1.size() % 2 == 0) {
        int m1 = (nums1.size() / 2) - 1;
        int m2 = nums1.size() / 2;
        double m = (nums1.at(m1) + nums1.at(m2)) / 2.0;
        return m;
    } else {
        int middle = l + (r - l) / 2;
        return nums1.at(middle);
    }
}