#include <vector>

class Solution
{
public:
  std::vector<int> getConcatenation(std::vector<int>& nums)
  {
    std::vector<int> out = nums;
    for (int i = 0; i<nums.size(); i++)
    {
      out.push_back(nums[i]);
    }
    return out;
  }
};

