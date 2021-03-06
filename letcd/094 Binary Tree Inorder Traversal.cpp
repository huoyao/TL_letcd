#if 0
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// Definition for binary tree
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  vector<int> inorderTraversal(TreeNode *root) {
    stack<TreeNode *> st;
    vector<int> res;
    TreeNode *node = root;
    do
    {
      while (node)
      {
        st.push(node);
        node = node->left;
      }
      if (!st.empty())
      {
        node = st.top();
        res.push_back(node->val);
        st.pop();
        node = node->right;
      }
    } while (!st.empty() || node != NULL);
    return res;
  }

  //奇怪的左子树用递归右子树用迭代的中序遍历
  void inorder(TreeNode* root) {
    while (root != NULL) {
      // Left subtree
      inorder(root->left);

      // Print value
      printf("%d\n", root->val);

      // Right subtree
      root = root->right;
    }
  }
};

int main()
{
  Solution slu;
  TreeNode *tr = new TreeNode(1);
  tr->left = new TreeNode(2);
  vector<int> res = slu.inorderTraversal(tr);
  for (auto &t : res)
    cout << t << "  ";
  cout << endl;
  system("pause");
}
#endif
