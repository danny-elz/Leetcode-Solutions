//
// Created by Danny Elzein on 2025-02-14.
//
#include <cmath>

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