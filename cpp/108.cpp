#include <iostream>
#include <vector>

struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;
  
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* allocate_tree_node(int e){
  TreeNode* tmp = new TreeNode;
  tmp->val = e;
  tmp->left = nullptr;
  tmp->right = nullptr;
  return tmp;
}

TreeNode* build_tree_root(int e){
  return allocate_tree_node(e);
}

class Solution
{
public:
  TreeNode* sortedArrayToBST(std::vector<int>& nums)
  {
    
  }
};
