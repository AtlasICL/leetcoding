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

int length_of_list(ListNode* l)
{
  int counter = 1;
  ListNode* curr_node = l;
  while (curr_node->next != nullptr)
  {
    counter++;
    curr_node = curr_node->next;
  } 
  return counter;
}

class Solution{
public:
  ListNode* removeNthFromEnd(ListNode* head, int n)
  {
    ListNode* curr_node = head;

    int m = length_of_list(head) - n - 1;

    for (int i = 0; i < m; i++){
      curr_node = curr_node->next;
    }

    ListNode* tmp_ptr = curr_node->next->next;
    int tmp_val = curr_node->next->val;

    curr_node->next = tmp_ptr;
    curr_node->val = tmp_val;

    return head;
  }
};