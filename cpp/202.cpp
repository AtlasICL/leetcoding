#include <set>
#include <cmath>

int sum_of_sqaures(int n)
{
  int out = 0;
  while (n > 0)
  {
    out += pow(n%10, 2);
    n /= 10;
  }
  return out;
}

bool rec(int n, std::set<int>& visited)
{
  if (n == 1) { return true; }
  if (visited.find(n) != visited.end()) // if n is in visited
  {
    return false;
  } 
  visited.insert(n);

  return rec(sum_of_sqaures(n), visited); // recursive call
}

class Solution
{
public:
  bool isHappy(int n)
  {
    std::set<int> visited;
    return rec(n, visited);
  }
};