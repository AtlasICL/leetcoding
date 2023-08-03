#include <vector>
#include <string>

int count_occurrences(std::vector<std::string>& vin, std::string n)
{
  int counter = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] == n) { counter++; }
  }

  return counter;
}

class Solution {
public:
  int finalValueAfterOperations(std::vector<std::string>& operations)
  {
    int dec, inc;
    dec = count_occurrences(operations, "--X");
    dec += count_occurrences(operations, "X--");

    inc = count_occurrences(operations, "++X");
    inc += count_occurrences(operations, "X++");

    return inc - dec;
  }
};