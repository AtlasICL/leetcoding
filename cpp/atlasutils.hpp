#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

namespace atlas
{

/// --- VECTOR UTILS --- 

int count_element(const std::vector<int>& vin, int n)
{
  int counter = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] == n) { counter++; }
  }
  return counter;
}

int count_element(const std::vector<double>& vin, double n)
{
  int counter = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] == n) { counter++; }
  }
  return counter;
}

int count_element(const std::vector<float>& vin, float n)
{
  int counter = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] == n) { counter++; }
  }
  return counter;
}

int count_element(const std::vector<std::string>& vin, std::string n)
{
  int counter = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    if (vin[i] == n) { counter++; }
  }
  return counter;
}

// returns sum of all elements of a vector
int sum_of_vector(const std::vector<int>& vin)
{
  int sum = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    sum += vin[i];
  }
  return sum;
}

// returns sum of all elements of a vector
double sum_of_vector(const std::vector<double>& vin)
{
  double sum = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    sum += vin[i];
  }
  return sum;
}

// returns sum of all elements of a vector
double sum_of_vector(const std::vector<float>& vin)
{
  double sum = 0;
  for (int i = 0; i < vin.size(); i++)
  {
    sum += vin[i];
  }
  return sum;
}

// creates vector containing all integers between min and max (both included)
std::vector<int> create_vector_between_bounds(int min, int max)
{
  assert (max > min);
  int len = max - min;
  std::vector<int> out;
  for (int i = 0; i < len+1; i++)
  {
    out.push_back(min + i);
  }
  return out;
}

// prints all elements of a vector
void print(const std::vector<int>& vin)
{
  std::cout << "[ ";
  for (int i = 0; i < vin.size(); i++)
  {
    std::cout << vin[i] << " ";
  }
  std::cout << "]" << std::endl;
}

// prints all elements of a vector
void print(const std::vector<double>& vin)
{
  std::cout << "[ ";
  for (int i = 0; i < vin.size(); i++)
  {
    std::cout << vin[i] << " ";
  }
  std::cout << "]" << std::endl;
}

// prints all elements of a vector
void print(const std::vector<float>& vin)
{
  std::cout << "[ ";
  for (int i = 0; i < vin.size(); i++)
  {
    std::cout << vin[i] << " ";
  }
  std::cout << "]" << std::endl;
}

// prints all elements of a vector
void print(const std::vector<std::string>& vin)
{
  std::cout << "[ ";
  for (int i = 0; i < vin.size(); i++)
  {
    std::cout << vin[i] << " ";
  }
  std::cout << "]" << std::endl;
}

// prints all elements of a 2D vector
void print(const std::vector<std::vector<int>>& tin){
  std::cout << "{" << std::endl;
  for (int j = 0; j<tin.size(); j++){
    print(tin[j]);
  }
  std::cout << "}" << std::endl;
}

// prints all elements of a 2D vector
void print(const std::vector<std::vector<double>>& tin){
  std::cout << "{" << std::endl;
  for (int j = 0; j<tin.size(); j++){
    print(tin[j]);
  }
  std::cout << "}" << std::endl;
}

// prints all elements of a 2D vector
void print(const std::vector<std::vector<float>>& tin){
  std::cout << "{" << std::endl;
  for (int j = 0; j<tin.size(); j++){
    print(tin[j]);
  }
  std::cout << "}" << std::endl;
}

// prints all elements of a 2D vector
void print(const std::vector<std::vector<std::string>>& tin){
  std::cout << "{" << std::endl;
  for (int j = 0; j<tin.size(); j++){
    print(tin[j]);
  }
  std::cout << "}" << std::endl;
}

// returns int with digits reversed
int reverse_digits_int(int n)
{
  int rev = 0;
  while (n != 0)
  {
    int lsb = n % 10;
    rev = rev * 10 + lsb;
    n = n / 10;
  }
  return rev;
}

// returns a vector containing the digits of an integer n
// if n negative, will return digits of abs(n)
std::vector<int> digits(int n)
{
  n = abs(n);
  std::vector<int> out;
  while (n > 0)
  {
    int lsb = n % 10;
    out.push_back(lsb);
    n /= 10;
  }
  std::reverse(out.begin(), out.end());
  return out;
}

// returns number of digits in integer n
// if n negative, returns number of digits in abs(n)
int number_of_digits(int n)
{
  n = abs(n);
  int digits_counter = 0;
  while (n > 0)
  {
    digits_counter++;
    n /= 10;
  }
  return digits_counter;
}




}