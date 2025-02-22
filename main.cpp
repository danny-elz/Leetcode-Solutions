#include <iostream>
class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        int n = nums.size();
        if (nums.size() == 1) {
            return nums[0];
        }
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double res = sum;

        for (int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];
            res = std::max(res, sum);
        }
        return res / k;
    }
};

int main() {
    Solution solution;
    return 0;
}
