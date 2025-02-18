//
// Created by Danny Elzein on 2025-02-18.
//

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