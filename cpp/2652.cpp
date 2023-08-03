#include <vector>

std::vector<int> divisibles(int n)
{
  std::vector<int> out;
  for (int i = 1; i<n+1; i++)
  {
    if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) { out.push_back(i); }
  }

  return out;
}

int sum_of_vector(std::vector<int>& vin)
{
  int sum = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    sum += vin[i];
  }
  return sum;
}

class Solution
{
public:
  int sumOfMultiples(int n)
  {
    std::vector<int> vsum = divisibles(n);
    return sum_of_vector(vsum);
  }
};