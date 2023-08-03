#include <vector>

int get_element(const std::vector<int>& vin, int n)
{
  if (n >= 0 && n < vin.size())
  {
    return vin[n];
  }
  else 
  {
    return -1;
  }
}

bool spot_free(const std::vector<int>& vin, int n)
{
  if (get_element(vin, n-1) == -1 && get_element(vin, n+1) == -1)
  {
    bool tmp = get_element(vin, n);
    return !tmp;
  }
  if (get_element(vin, n-1) == 0 && get_element(vin, n+1) == 0 && get_element(vin, n) == 0)
  {
    return true;
  }
  if (get_element(vin, n-1) == -1 && get_element(vin, n+1) == 0 && get_element(vin, n) == 0)
  {
    return true;
  }
  if (get_element(vin, n-1) == 0 && get_element(vin, n+1) == -1 && get_element(vin, n) == 0)
  {
    return true;
  }
  return false;
}

int free_spots(std::vector<int>& flowers)
{
  int i = 0;
  int counter = 0;
  while (i < flowers.size())
  {
    if (spot_free(flowers, i) == true)
    {
      counter++;
      i += 2;
    }
    else {
      i++;
    }
  }
  return counter;
}

class Solution {
public:
  bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    if (free_spots(flowerbed) >= n) { return true; }
    else { return false; }  
  }
};