//
// Created by Danny Elzein on 2025-02-14.
//
#include <vector>

int kthFactor(int n, int k) {
    std::vector<int> factors;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            factors.push_back(i);
        }
    }
    if (k > factors.size()) {
        return -1;
    }
    return factors.at(k-1);
}
};