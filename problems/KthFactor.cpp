//
// Created by Danny Elzein on 2025-02-14.
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