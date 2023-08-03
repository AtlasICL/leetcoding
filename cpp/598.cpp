#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> int_table;

void print(const std::vector<int>& vin)
{
  std::cout << "[ ";
  for (int i = 0; i < vin.size(); i++)
  {
    std::cout << vin[i] << " ";
  }
  std::cout << "]" << std::endl;
}

void print(const int_table& tin){
  std::cout << "{" << std::endl;
  for (int j = 0; j<tin.size(); j++){
    print(tin[j]);
  }
  std::cout << "}" << std::endl;
}

void increment_in_range(int_table& tin, int x, int y)
{
  for (int i = 0; i < y; i++){
    for (int j = 0; j < x; j++){
      tin[i][j]++;
    }
  }
}

int max_in_table(const int_table& tin)
{
  int max = tin[0][0];
  for (int y = 0; y < tin.size(); y++){
    for (int x = 0; x < tin[0].size(); x++){
      if (tin[y][x] > max){
        max = tin[y][x];
      }
    }
  }
  return max;
}

int count_in_table(const int_table& tin, int target)
{
  int counter = 0;
  for (int y = 0; y < tin.size(); y++){
    for (int x = 0; x < tin[0].size(); x++){
      if (tin[y][x] == target){
        counter++;
      }
    }
  }
  return counter;
}

std::vector<int> cons_vector(int n)
{
  std::vector<int> out;
  for (int i = 0; i < n; i++)
  {
    out.push_back(0);
  }
  return out;
}

class Solution
{
public:
  int maxCount(int m, int n, const int_table& ops)
  {
    int_table out;
    for (int i = 0; i < m; i++){
      out.push_back(cons_vector(n));
    }

    for (int i = 0; i < ops.size(); i++){
      increment_in_range(out, ops[i][0], ops[i][1]);
    }

    int max = max_in_table(out);
    return count_in_table(out, max);
  }
};

// works, but memory limit exceeded

int main()
{
  Solution sol;
  sol.maxCount(3, 3, {{2,2}, {3,3}});

}
