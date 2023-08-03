#include <vector>
#include <algorithm>

int greatest_gap(const std::vector<int>& vin)
{
  int gap = 0;
  if (vin.size() <= 1) { return 0; }
  if (vin.size() == 1) { return vin[1] - vin[0]; }
  
  int i = 1; 
  while (i<vin.size())
  {
    if (vin[i] - vin[i-1] > gap) { gap = vin[i] - vin[i-1]; }
    i++;
  }

  return gap;
}

class Solution
{
public:
  int maxWidthOfVerticalArea(std::vector<std::vector<int>>& points)
  {
    std::vector<int> xvalues;
    for (int i = 0; i < points.size(); i++)
    {
      xvalues.push_back(points[i][0]);
    }
    
    std::sort(xvalues.begin(), xvalues.end());

    int out = greatest_gap(xvalues);

    return out;
  }
};

int main()
{
  Solution sol;
  std::vector<std::vector<int>> vec1 = {{8,7},{9,9},{7,4},{9,7}};
  sol.maxWidthOfVerticalArea(vec1);
}
