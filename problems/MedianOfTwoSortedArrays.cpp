//
// Created by Danny Elzein on 2025-02-16.
//
#include <vector>
//
// The `findMedianSortedArrays` function finds the median of two sorted arrays `nums1` and `nums2`.
//
// 1. Merge the two arrays: Iterate through `nums2` and append each element to `nums1`.
//    - This can be done using a for loop: `for(int n: nums2) { nums1.push_back(n); }`.
//
// 2. Sort the merged array: Use `std::sort` to sort `nums1` in ascending order.
//    - `std::sort(std::begin(nums1), std::end(nums1));` sorts the array.
//
// 3. Calculate the median:
//    - If the size of the merged array is even, the median is the average of the two middle elements.
//      - Find the indices of the two middle elements: `m1 = (nums1.size() / 2) - 1` and `m2 = nums1.size() / 2`.
//      - Calculate the median as `(nums1.at(m1) + nums1.at(m2)) / 2.0`.
//    - If the size of the merged array is odd, the median is the middle element.
//      - Find the index of the middle element: `middle = l + (r - l) / 2`.
//      - Return the middle element: `nums1.at(middle)`.
//
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