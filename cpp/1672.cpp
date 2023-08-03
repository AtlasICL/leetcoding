#include <vector>

int sum_of_vector(const std::vector<int>& vin)
{
  int sum = 0;
  for (int i = 0; i < vin.size(); i++) { sum += vin[i]; }
  return sum;
}

class Solution
{
public:
  int maximumWealth(const std::vector<std::vector<int>>& accounts)
  {
    std::vector<int> wealth;
    int max = sum_of_vector(accounts[0]);
    for (int i = 0; i < accounts.size(); i++)
    {
      max = sum_of_vector(accounts[i]) > max ? sum_of_vector(accounts[i]) : max;
    }
    return max;
  }
};
