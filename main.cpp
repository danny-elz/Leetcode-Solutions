 #include <iostream>


 class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
       auto max = std::max_element(candies.begin(), candies.end());
       std::vector<bool> res;
       res.reserve(candies.size());
       for(int i = 0; i < candies.size(); i++) {
           if(extraCandies + candies[i] >= *max) {
                res.push_back(true);
           } else
               res.push_back(false);
       }
       return res;
    }
};


int main() {
    std::vector<int> test = {2,4,6,5};
    int x = 3;
    Solution solution;
    std::vector<bool> y = solution.kidsWithCandies(test, x);
    return 0;
}
