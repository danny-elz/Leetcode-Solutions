//
// Created by Danny Elzein on 2025-02-14.
//
#include <cmath>
//
// The `mySqrt` function calculates the integer square root of a given non-negative integer `x`.
//
// 1. Initialize two pointers: `int l = 0` and `int r = x`.
//    - `l` points to the beginning of the range, and `r` points to the end of the range.
//
// 2. Initialize the result variable: `int res = 0` is used to store the integer square root found so far.
//
// 3. Iterate through the range using a while loop: `while (l <= r)`.
//    - The loop continues until the two pointers meet.
//
// 4. Calculate the middle point: For each iteration, calculate the middle point `m` as `l + ((r - l) / 2)`.
//    - This helps to avoid overflow that can occur with `(l + r) / 2`.
//
// 5. Compare the square of the middle point with `x`:
//    - If `pow(m, m) < x`, it means the integer square root is greater than `m`.
//      - Update `l` to `m + 1` to search in the right half of the range.
//      - Update `res` to `m` as the current best guess for the integer square root.
//    - If `pow(m, m) > x`, it means the integer square root is less than `m`.
//      - Update `r` to `m - 1` to search in the left half of the range.
//    - If `pow(m, m) == x`, it means `m` is the exact integer square root.
//      - Return `m` as the result.
//
// 6. Return the result: After the loop, return the value of `res`.
//    - The variable `res` now represents the integer square root of `x`.
//
int mySqrt(int x) {
    int l = 0;
    int r = x;
    int res = 0;

    while(l <= r) {
        int m = l + ((r - l) / 2);
        if(pow(m,m) < x) {
            l = m + 1;
            res = m;
        } else if (pow(m,m) > x) {
            r = m - 1;
        } else
            return m;
    }
    return res;
}