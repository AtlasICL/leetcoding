#include <iostream>
#include <vector>

int count_elements(std::vector<int>& vin, int n)
{
  int counter = 0;
  for (int i = 0; i<vin.size(); i++)
  {
    if (vin[i] == n)
    {
      counter++;
    }
  }
  return counter;
}

class Solution
{
public:
  int singleNumber(std::vector<int>& nums)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      if (count_elements(nums, nums[i]) == 1)
      {
        return nums[i];
      }
    }
    return nums[0];
  }
};