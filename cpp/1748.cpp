#include <vector>
#include "atlasutils.hpp"

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
  int sumOfUnique(std::vector<int>& nums)
  {
    std::vector<int> uniques;
    for (int i = 0; i < nums.size(); i++)
    {
      if (count_elements(nums, nums[i]) == 1)
      {
        uniques.push_back(nums[i]);
      }
    }
    return atlas::sum_of_vector(uniques);
  }
};

int main()
{

}