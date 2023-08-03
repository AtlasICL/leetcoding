#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int i = nums.size() - 1;

        std::vector<int> out;

        while (i > 0){
            int j = i - 1;

            while (j >= 0){
                if (nums[i] + nums[j] == target){
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
                j--;
            }
            i--;
        }
        return out;
    }
};