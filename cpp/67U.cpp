#include <string>

// passes most test cases
// however runtime error : stoll() out of range
// no fix found

std::string toBinary(__int128_t n)
{
  std::string r;
  while(n!=0)
  {
    r = (n % 2 == 0 ? "0" : "1" ) + r;
    n /= 2;
  }
  
  if (r == "")
  {
    return "0";
  }

  else 
  {
    return r;
  }
}

class Solution {
public:
  std::string addBinary(std::string a, std::string b) {
    __int128_t inta = stoll(a, nullptr, 2);
    __int128_t intb = stoll(b, nullptr, 2);

    __int128_t sum = inta + intb;

    std::string out = toBinary(sum);
    return out;
  }
};

int main()
{
  Solution sol;
  sol.addBinary("10001", "00001");
}