//
// Created by Danny Elzein on 2025-02-18.
//
//
// The `firstBadVersion` function finds the first bad version in a sequence of versions using a binary search approach.
//
// 1. Initialize two pointers: `int low = 1` and `int high = n`.
//    - `low` points to the beginning of the range, and `high` points to the end of the range.
//
// 2. Iterate through the range using a while loop: `while(low < high)`.
//    - The loop continues until the two pointers meet.
//
// 3. Calculate the middle point: For each iteration, calculate the middle point `m` as `low + (high - low) / 2`.
//    - This helps to avoid overflow that can occur with `(low + high) / 2`.
//
// 4. Check if the middle point is a bad version:
//    - If `isBadVersion(m)` is true, it means the first bad version is at `m` or before `m`.
//      - Update `high` to `m` to search in the left half of the range.
//    - If `isBadVersion(m)` is false, it means the first bad version is after `m`.
//      - Update `low` to `m + 1` to search in the right half of the range.
//
// 5. Return the first bad version: After the loop, `low` will point to the first bad version.
//    - Return `low` as the result.
//
/*
 bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low = 1;
    int high = n;

    while(low < high) {
        int m = low + (high - low) / 2;
        if(isBadVersion(m)) {
            high = m;
        } else {
            low = m + 1;
        }
    }
    return low;
}
 */