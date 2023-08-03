#include <iostream>
#include <vector>

bool element_exists(const std::vector<int> vin, int n)
{
  for (int i = 0; i<vin.size(); i++)
  {
    if (vin[i] == n) { return true; }
  }
  return false;
}

void unique_vector(std::vector<int>& vin)
{
  std::vector<int> vout;
  for (int i = 0; i<vin.size(); i++)
  {
    if (!element_exists(vout, vin[i]))
    {
      vout.push_back(vin[i]);
    }
  }
  vin = vout;
}

class Solution
{
public:
  int removeDuplicates(std::vector<int>& nums)
  {
    unique_vector(nums);
    return nums.size();
  }
};