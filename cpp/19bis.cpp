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

ListNode* cons_list(int e, ListNode* l){
  ListNode* tmp; 
  tmp = new ListNode;

  tmp->val = e;
  tmp->next = l;

  return tmp;
}

void deallocate_list(ListNode* l){
  ListNode* tmp;

  while(l != NULL){
    tmp = l->next;
    delete l;
    l = tmp;
  }
}

class Solution
{
public:
  ListNode* removeNthFromEnd(ListNode* head, int n)
  {
    ListNode* out = nullptr;

    int m = length_of_list(head) - n;

    ListNode* it = head;

    for (int i = 0; i < m; i++){
      out = cons_list(it->val, out);
    }

    it = it->next;

    out = cons_list(it->val, it);

    return out;
  }
};