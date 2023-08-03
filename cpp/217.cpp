#include <iostream>
#include <set>
#include <vector>

bool element_exists(const std::vector<int>& vin, int n)
{
  for (int i = 0; i<vin.size(); i++)
  {
    if (vin[i] == n) { return true; }
  }
  return false;
}

std::vector<int> unique_vector(const std::vector<int>& vin)
{
  std::vector<int> vout;
  for (int i = 0; i<vin.size(); i++)
  {
    if (!element_exists(vout, vin[i]))
    {
      vout.push_back(vin[i]);
    }
  }
  return vout;
}

class Solution
{
public:
  bool containsDuplicate(std::vector<int>& nums)
  {
    std::set<int> list_of_elements;

    for (int i = 0; i<nums.size(); i++)
    {
      list_of_elements.insert(nums[i]);
    }

    if (list_of_elements.size() != nums.size())
    {
      return true;
    }

    return false;
  }
};
