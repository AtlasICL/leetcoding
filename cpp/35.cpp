#include <iostream>
#include <vector>

int getIndex(std::vector<int> nums, int target)
{
  int i = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == target)
    {
      return i;
    }
    if (nums[i] > target)
    {
      return i;
    }
  }
  return nums.size();
}



class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        return getIndex(nums, target);
    }
};
