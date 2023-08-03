#include <vector>
#include <string>
#include <iostream>

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

int getIntFromList(ListNode* list)
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

ListNode* addListNode(int val, ListNode* l)
{
  ListNode* tmp = new ListNode;
  tmp->val = val;
  tmp->next = l;
  return tmp;
}

ListNode* makeListFromInt(int n)
{
  ListNode* output;
  while (n > 0)
  {
    int lsb = n % 10;
    output = addListNode(lsb, output);
    n = n / 10;
  }
  return output;
}

class Solution
{
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
  {
    int num1, num2;
    num1 = getIntFromList(l1);
    num2 = getIntFromList(l2);

    int out = num1 + num2;
    std::cout << "SUM " << out << std::endl;

    ListNode* output_list;
    output_list = makeListFromInt(out);
    return output_list;
  }
};

int main()
{
  ListNode* l1 = new ListNode;
  ListNode* l2 = new ListNode;
  ListNode* l3 = new ListNode;
  
  l1->val = 2;
  l2->val = 5;
  l3->val = 9;

  l1->next = l2;
  l2->next = l3;
  l3->next = nullptr;

  int out_tester = getIntFromList(l1);
  std::cout << out_tester << std::endl;

  ListNode* p1 = new ListNode;
  ListNode* p2 = new ListNode;
  ListNode* p3 = new ListNode;
  
  p1->val = 3;
  p2->val = 2;
  p3->val = 1;

  p1->next = p2;
  p2->next = p3;
  p3->next = nullptr;

  out_tester = getIntFromList(p1);
  std::cout << out_tester << std::endl;

  Solution sol;
  sol.addTwoNumbers(l1, p1);

}