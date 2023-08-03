#include <iostream>
#include <string>

struct ComplexNumber
{
  int real_part;
  int complex_part;

  ComplexNumber() : real_part(0), complex_part(0) {} ;

  ComplexNumber(int a, int b) : real_part(a), complex_part(b) {} ;

  void print()
  {
    std::cout << real_part << " + " << complex_part << "i" << std::endl;
  }

  ComplexNumber multiply(ComplexNumber CNin)
  {
    ComplexNumber out;

    out.complex_part = 0;
    out.real_part = (real_part * CNin.real_part) - (complex_part * CNin.complex_part);
    out.complex_part = real_part * CNin.complex_part + CNin.real_part * complex_part;

    return out;
  }
};

ComplexNumber get_complex_from_str(std::string sin)
{ 
  std::string real_coefficient = "";
  int index = 0;
  while (index < sin.find('+'))
  {
    real_coefficient += sin[index];
    index++;
  }
  std::cout << real_coefficient << std::endl;
    
  index = sin.find('+') + 1;
  std::string complex_coefficient = "";
  while (index < sin.size() - 1)
  {
    complex_coefficient += sin[index];
    index ++;
  }

  ComplexNumber out(std::stoi(real_coefficient), std::stoi(complex_coefficient));
  out.print();
  return out;
}

std::string complex_to_str(ComplexNumber cn)
{
  std::string out = "";
  out += std::to_string(cn.real_part);
  out += '+';
  out += std::to_string(cn.complex_part);
  out += 'i';
  return out;
}

class Solution
{
public:
  std::string complexNumberMultiply(std::string num1, std::string num2)
  {
    ComplexNumber n1 = get_complex_from_str(num1);
    ComplexNumber n2 = get_complex_from_str(num2);
    ComplexNumber out = n1.multiply(n2);
    return complex_to_str(out);
  }
};
