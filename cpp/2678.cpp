#include <vector>
#include <string>
#include <iostream>

class Solution
{
public:
  int countSeniors(std::vector<std::string>& details)
  {
    for (std::string passenger : details)
    {
      auto msb = passenger.at(11);
      auto lsb = passenger.at(12);

      std::cout << msb << lsb << std::endl;
      std::cout << " " << passenger << " " << std::endl;
    }
    return 0;
  }
};

int main()
{
  std::vector<std::string> a = {"7868190130M7522","5303914400F9211","9273338290F4010"};

  Solution sol;
  sol.countSeniors(a);
}

