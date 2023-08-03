#include <algorithm>

double recPow(double x, int n)
{
  if (n == 0){
    return 1;
  }
  return x * recPow(x, n-1);
}

class Solution {
public:
  double myPow(double x, int n) {
    if (n > 0)
    {
      return recPow(x, n);
    }
    n = abs(n);
    double rev = recPow(x, n);
    return 1/rev;
  }
};