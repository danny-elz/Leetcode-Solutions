//
// Created by Danny Elzein on 2025-02-14.
//
// The `kthFactor` function finds the k-th factor of a given integer `n`.
//
// 1. Initialize a result variable: `int res = 0` is used to count the factors found so far.
//
// 2. Iterate through the range from `1` to `n`: Use a for loop `for (int i = 1; i <= n; i++)`.
//    - For each integer `i`, check if it is a factor of `n` using `if (n % i == 0)`.
//      - If `i` is a factor, increment `res` by `1`.
//
// 3. Check if the current factor is the k-th factor:
//    - If `res` equals `k`, return the current factor `i` as the k-th factor.
//
// 4. Return `-1` if the k-th factor is not found: After the loop, if `res` does not equal `k`, return `-1`.
//
int kthFactor(int n, int k) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            res++;
        if (res == k) {
            return i;
        }
    }
    return -1;
}