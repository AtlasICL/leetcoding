struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;
};

class Solution
{
public:
  bool checkTree(TreeNode* root)
  {
    int root_val = root->val;
    int sum_children = root->left->val + root->right->val;
    if (root_val == sum_children) { return true; }
    return false;
  }
};