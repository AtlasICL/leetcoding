#include <string>

bool six_exists(int n)
{
  std::string tmp;
  tmp = std::to_string(n);
  if (tmp.find("6") == std::string::npos) { return false; }
  return true;
}

int location_first_six(int n)
{
  std::string tmp = std::to_string(n);
  return tmp.find_first_of("6");
}

class Solution
{
public:
  int maximum69Number(int num)
  {
    if (!six_exists(num)) { return num; }
    
    std::string str = std::to_string(num);
    int index = location_first_six(num);
    str[index] = '6';

    int out = std::stoi(str);
    return out;
  }
};