#include <vector>
#include <iostream>

void print(const std::vector<int>& vin)
{
  std::cout << "[";
  for (int i = 0; i<vin.size(); i++)
  {
    std::cout << vin[i] << " ";
  }
  std::cout << "]" << std::endl;
}

class Solution
{
public:
  std::vector<int> shuffle(std::vector<int>& nums, int n)
  {
    std::vector<int> vec1, vec2;

    for (int i = 0; i < n; i++)
    {
      vec1.push_back(nums[i]);
    }

    for (int i = n; i < nums.size(); i++)
    {
      vec2.push_back(nums[i]);
    }

    std::vector<int> out;
    for (int i = 0; i < n; i++)
    {
      out.push_back(vec1[i]);
      out.push_back(vec2[i]);
    }

    return out;
  }
};

int main()
{
  Solution sol;
  std::vector<int> tester = {2, 4, 5, 6};
  std::vector<int> test = sol.shuffle(tester, 2);
  print(test);
  
}