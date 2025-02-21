#include <iostream>
class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int post = nums.size() - 1;
        for (int i = nums.size() - 1; i <= 0; i--) {
            if(i + nums[i] > post)
                post = i;
        }
        return post == 0;
    }
};

int main() {
    Solution solution;
    return 0;
}
