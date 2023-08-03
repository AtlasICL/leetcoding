#include "atlasutils.hpp"
#include <iostream>
#include <string>

int main()
{

  std::string a = "2173+78i";

  std::cout << a.find('+') << std::endl;
  
  std::string real_coefficient = "";
  int index = 0;
  while (index < a.find('+'))
  {
    real_coefficient += a[index];
    index++;
  }
  std::cout << real_coefficient << std::endl;
    
  index = a.find('+') + 1;
  std::string complex_coefficient = "";
  while (index < a.size() - 1)
  {
    complex_coefficient += a[index];
    index ++;
  }

  std::cout << complex_coefficient;

}
