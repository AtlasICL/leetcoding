#include <iostream>
#include <vector>
#include <algorithm>

struct ListNode
{
  int val;
  ListNode* next;

  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

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

int get_num_from_list(ListNode* list)
{
  if (list == nullptr)
  {
    std::cout << "TRIED TO FETCH INT FROM EMPTY LIST" << std::endl;
    EXIT_FAILURE;
  }

  int out = 0;
  out = list->val;

  while (list->next != nullptr)
  {
    list = list->next;
    out = 10 * out + list->val;
  }

  out = reverse_digits_int(out);
  return out;
}

ListNode* cons_list(int e, ListNode* l){
  ListNode* tmp; 
  tmp = new ListNode;

  tmp->val = e;
  tmp->next = l;

  return tmp;
}

class Solution
{
public: 
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
  {
    int num1, num2;
    num1 = get_num_from_list(l1);
    num2 = get_num_from_list(l2);

    int num3 = num1 + num2;
    std::vector<int> dig3 = digits(num3);

    if (dig3.size() > 0)
    {
      ListNode* l = nullptr;
      int counter = 0;

      while (counter < dig3.size()){
        l = cons_list(dig3[counter], l);
        counter ++;
      }
      return l;
    }
    else
    {
      ListNode* l = nullptr;
      l = cons_list(0, l);
      return l;
    }
  }
};