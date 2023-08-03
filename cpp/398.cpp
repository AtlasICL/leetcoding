#include <vector>
#include <cstdlib>

std::vector<int> find_indexes(const std::vector<int>& vin, int target)
{
  std::vector<int> indexes;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] == target) { indexes.push_back(i); }
  }
  return indexes;
}

class Solution
{
public:
  Solution(std::vector<int>& nums)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      m_nums.push_back(nums[i]);
    }
  }

  int pick(int target)
  {
    std::vector<int> indexes = find_indexes(m_nums, target);
    int rando = rand() % (indexes.size());
    return rando;
  }

private:
  std::vector<int> m_nums;
};