#include <iostream>
#include <string>

uint64_t reverse_digits_int(uint64_t n)
{
  uint64_t rev = 0;
  while (n != 0)
  {
    uint64_t lsb = n % 10;
    rev = rev * 10 + lsb;
    n = n / 10;
  }
  return rev;
}

bool palindrome(uint64_t x){
  uint64_t tmp = reverse_digits_int(x);
  if (tmp != x) { return false; }
  return true;
}

class Solution
{
public:
  bool isPalindrome(int x)
  {
    if (x < 0) { return false; }
    return palindrome(x);
  }
};