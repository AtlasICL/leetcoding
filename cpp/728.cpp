#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> digits(int n)
{
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

bool is_self_dividing(const int n)
{
  std::vector<int> dig = digits(n);
  for (int i = 0; i < dig.size(); i++)
  {
    int curr = dig[i];
    if (curr == 0) { return false; }
    if (n % curr != 0) { return false; }
  }
  return true;
}

std::vector<int> create_vector_between_bounds(int min, int max)
{
  assert (max > min);
  int len = max - min;
  std::vector<int> out;
  for (int i = 0; i < len+1; i++)
  {
    out.push_back(min + i);
  }
  return out;
}


class Solution
{
public:
  std::vector<int> selfDividingNumbers(int left, int right)
  {
    std::vector<int> output;
    if (left >= right) { return output; }
    std::vector<int> ints = create_vector_between_bounds(left, right);
    for (const auto integer : ints)
    {
      if (is_self_dividing(integer)) { output.push_back(integer); }
    }
    return output;
  }
};