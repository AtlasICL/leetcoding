#include <iostream>

int reverse_digits_int(int n)
{
  int rev = 0;
  while (n != 0)
  {
    int lsb = n % 10;
    rev = rev * 10 + lsb;
    n = n / 10;
  }
  return rev;
}

int main()
{
  int a = 1259;
  int b = reverse_digits_int(a);
  std::cout << b;
}