//
// Created by Danny Elzein on 2025-02-18.
//
#include <iostream>
//
// The `kidsWithCandies` function determines which children can have the greatest number of candies if they are given extra candies.
//
// 1. Find the maximum number of candies any child currently has:
//    - Use `std::max_element` to find the maximum value in the `candies` vector.
//
// 2. Initialize a result vector `res` to store boolean values indicating whether each child can have the greatest number of candies:
//    - Reserve space in the vector to optimize memory allocation.
//
// 3. Iterate through each child's candies:
//    - For each child, check if the sum of their candies and `extraCandies` is greater than or equal to the maximum number of candies.
//    - If true, add `true` to the result vector; otherwise, add `false`.
//
// 4. Return the result vector `res`.
//
std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
    auto max = std::max_element(candies.begin(), candies.end());
    std::vector<bool> res;
    res.reserve(candies.size());

    for(int candie : candies) {
        if(extraCandies + candie >= *max) {
            res.push_back(true);
        } else
            res.push_back(false);
    }
    return res;
}
