#include <vector>
#include <string>
#include <algorithm>
#include "atlasutils.hpp"

std::vector<int> digits(int n)
{
  if (n == 0) { return {0}; }
  n = abs(n);
  std::vector<int> out;
  while (n > 0)
  {
    int lsb = n % 10;
    out.push_back(lsb);
    n /= 10;
  }
  std::reverse(out.begin(), out.end());
  return out;
}

int count_element(const std::vector<int>& vin, int n)
{
  int counter = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] == n) { counter++; }
  }
  return counter;
}

class Solution
{
public:
  bool digitCount(std::string num)
  {
    int n = std::stoi(num);
    std::vector<int> dig = digits(n);

    for (int i = 0; i < dig.size(); i++)
    {
      if (count_element(dig, i) != dig[i]) { return false; }
    }
    return true;
  }
};

int main()
{
  // Solution sol;
  // std::string ss = "1210";
  // sol.digitCount(ss);

  std::vector<int> a = digits(0);
  atlas::print(a);
}