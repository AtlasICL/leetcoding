#include <iostream>
#include <vector>

int binary_search(std::vector<int>& nums, int target)
{
  int max = nums.size() - 1;
  int min = 0;
  int at;

  while (max > min)
  {
    std::cout << "NEW LOOP\n";
    std::cout << "current min = " << min << std::endl;
    std::cout << "current max = " << max << std::endl;
    at = min + (max-min) / 2;
    std::cout << "at = " << at << std::endl;

    if (nums[at] == target)
    {
      std::cout << "target found, returning at : " << at << std::endl; 
      return at;
    }

    else if (nums[at] > target)
    {
      std::cout << "nums[at] > target\n";
      std::cout << "at = " << at << std::endl;
      std::cout << "new max: " << at-1 << std::endl;
      max = at-1;
    }

    else if (nums[at] < target)
    {
      std::cout << "nums[at] < target\n";
      std::cout << "at = " << at << std::endl;
      std::cout << "new min: " << at+1 << std::endl;
      min = at+1;
    }

    
  }

  return -1;
}

int main()
{
  
  std::vector<int> vec = {3, 6, 7, 8, 12, 22, 28};

  int debug = binary_search(vec, 28);

  std::cout << debug << std::endl;


}