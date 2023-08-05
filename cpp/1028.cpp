#include <iostream>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* cons_tree(int e, TreeNode* l, TreeNode* r){
  TreeNode* tmp;
  tmp = new TreeNode;
  tmp->val = e;
  tmp->left = l;
  tmp->right = r;
  return tmp;
}

TreeNode* ordered_insertion_tree(int e, TreeNode* t){
  if(t == nullptr){
    return cons_tree(e, nullptr, nullptr);
  }
  else if(e < t->val){
    t->left = ordered_insertion_tree(e, t->left);
    return t;
  }
  else{
    t->right = ordered_insertion_tree(e, t->right);
    return t;
  }
}

class Solution
{
public:
  TreeNode* recoverFromPreorder(std::string traversal)
  {
    TreeNode* t = nullptr;

    std::vector<int> elements = {1, 2, 3, 4, 5, 6, 7};
    t = ordered_insertion_tree(15, t);
    t = ordered_insertion_tree(20, t);
    t = ordered_insertion_tree(1, t);
    t = ordered_insertion_tree(6, t);
    t = ordered_insertion_tree(18, t);
    t = ordered_insertion_tree(4, t);
    t = ordered_insertion_tree(9, t);
  }

};