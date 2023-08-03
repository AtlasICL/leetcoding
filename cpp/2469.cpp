#include <vector>

class Solution
{
public:
  std::vector<double> convertTemperature(double celsius)
  {
    double kelvin = celsius + 273.15;

    double fahreneit = (celsius * 9 / 5) + 32;

    std::vector<double> out = {kelvin, fahreneit};
    
    return out;
  }
};