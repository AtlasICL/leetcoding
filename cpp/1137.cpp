#include <stdint.h>

uint32_t tribo(uint32_t n)
{
  if (n == 0) { return 0; }
  if (n == 1 || n == 2) { return 1; }
  else {
    return tribo(n-1) + tribo(n-2) + tribo(n-3);
  }
}

class Solution
{
public:
  uint32_t tribonacci(int n)
  {
    return tribo(n);
  }
};
