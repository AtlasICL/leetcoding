#include <vector>

class Solution
{
public:
  std::vector<int> createTargetArray(const std::vector<int>& nums, const std::vector<int>& index)
  {
    std::vector<int> out;
    for (int i = 0; i < nums.size(); i++)
    {
      out.insert(out.begin()+index[i], nums[i]);
    }
    return out;
  }
};
