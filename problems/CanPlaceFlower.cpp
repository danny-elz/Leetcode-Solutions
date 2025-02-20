//
// Created by Danny Elzein on 2025-02-19.
//
// The `canPlaceFlowers` function determines if `n` new flowers can be planted in the `flowerbed` without violating the no-adjacent-flowers rule.
//
// 1. Pad the flowerbed with zeros at both ends:
//    - Insert a `0` at the beginning and append a `0` at the end of the `flowerbed` vector to handle edge cases.
//
// 2. Iterate through the flowerbed:
//    - Use a for loop `for (int i = 1; i < flowerbed.size() - 1; i++)` to check each position from the second element to the second last element.
//
// 3. Check for valid spots to plant flowers:
//    - For each position `i`, check if the current position and its adjacent positions are all `0` using `if (flowerbed.at(i - 1) == 0 && flowerbed.at(i) == 0 && flowerbed.at(i + 1) == 0)`.
//    - If a valid spot is found, plant a flower by setting `flowerbed.at(i) = 1` and decrement `n` by 1.
//
// 4. Return the result:
//    - After the loop, return `true` if `n` is less than or equal to 0, indicating that all required flowers have been planted. Otherwise, return `false`.
//
#include <iostream>
bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    flowerbed.insert(flowerbed.begin(), 0);
    flowerbed.push_back(0);
    for (int i = 1; i < flowerbed.size() - 1; i++) {
        if (flowerbed.at(i - 1) == 0 && flowerbed.at(i) == 0 && flowerbed.at(i + 1) == 0) {
            flowerbed.at(i) = 1;
            n--;
        }
    }
    return n <= 0;
}