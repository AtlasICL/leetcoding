#include <cmath>

class Solution
{
public:
  bool isPowerOfThree(int n)
  {
    if (n == 0) { return false; }
    if (n == 27) { return true; }

    double tmp = cbrt(n);
    if (floor(tmp) == tmp) { return true; }
    else { return false; }
  }
};