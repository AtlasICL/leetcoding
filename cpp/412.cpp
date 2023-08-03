#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  std::vector<std::string> fizzBuzz(int n)
  {
    std::vector<std::string> output;
    for (int i = 1; i<=n; i++)
    {
      std::string tmp = "";

      if (i % 3 == 0)
      {
        tmp += "Fizz";
      }
      if (i % 5 == 0)
      {
        tmp += "Buzz";
      }
      if (tmp == "")
      {
        tmp = std::to_string(i);
      }

      output.push_back(tmp);
    }
    return output;      
  }
};