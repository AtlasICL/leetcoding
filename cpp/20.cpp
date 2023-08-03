#include <iostream>
#include <vector>

class Solution
{
public:
  int search(std::vector<int>& nums, int target)
  {
    bool found = false;
    int min = 0;
    int max = nums.size() - 1;
    int at = (max+1) / 2;

    while (!found)
    {
      if (nums[at] == target)
      {
        found = true;
        return at;
      }

      else if (nums[at] > target)
      {
        max = at;
        at = (max - min) / 2;
      }

      else if (nums[at] < target)
      {
        min = at;
        at = (max - min) / 2;
      }

      else if (max - min <= 1)
      {
        return -1;
      }
      
    }
    return -1;
  }
};

int main()
{


}