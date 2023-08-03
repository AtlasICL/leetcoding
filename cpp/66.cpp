#include <iostream>
#include <vector>

void print(const std::vector<int>& vin)
{
  std::cout << "[";
  for (int i = 0; i<vin.size(); i++)
  {
    std::cout << vin[i] << " ";
  }
  std::cout << "]" << std::endl;
}

std::vector<int> reverse_vector(const std::vector<int>& vin)
{
  std::vector<int> vout;
  for (int i = vin.size() - 1; i >= 0; i--)
  {
    vout.push_back(vin[i]);
  }
  return vout;
}

int leading_nines(const std::vector<int>& vin)
{
  int i = 0;
  int counter = 0;
  while (i<vin.size() && vin[i] == 9)
  {
    counter++;
    i++;
  }
  return counter;
}

class Solution
{
public:
  std::vector<int> plusOne(std::vector<int>& digits)
  {
    std::vector<int> vout = reverse_vector(digits);
    int leading = leading_nines(vout);

    if (leading == vout.size())
    {
      for (int i=0; i<vout.size(); i++)
      {
        vout[i] = 0;
      }
      vout.insert(vout.begin(), 1);
    }

    for (int i = 0; i<leading; i++)
    {
      vout[i] = 0;
    }
    
    vout[leading] = vout[leading] + 1;
    std::vector<int> output = reverse_vector(vout);
    return output;
  }
};

int main()
{
  std::vector<int> vec1 = {1, 2, 3, 4, 5, 7};
  std::vector<int> vec2 = {0, 9, 3, 4, 5, 7};
  std::vector<int> vec3 = {9, 9, 9, 4, 5, 7};
  std::vector<int> vec4 = {9, 0, 9, 4, 5, 7};

  int led1, led2, led3, led4;

  led1 = leading_nines(vec1);
  led2 = leading_nines(vec2);
  led3 = leading_nines(vec3);
  led4 = leading_nines(vec4);

  std::cout << led1 << std::endl;
  std::cout << led2 << std::endl;
  std::cout << led3 << std::endl;
  std::cout << led4 << std::endl;
}