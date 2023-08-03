#include <vector>
#include <iostream>

int count_smaller_than(std::vector<int>& vin, int index)
{
  int counter = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] < vin[index] && i != index)
    {
      counter++;
    }
  }
  return counter;
}

class Solution
{
public:
  std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums)
  {
    std::vector<int> out;
    for (int i = 0; i < nums.size(); i++)
    {
      out.push_back(count_smaller_than(nums, i));
    }
    return out;
  }
};


