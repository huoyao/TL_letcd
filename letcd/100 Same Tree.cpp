#if 0
#include <iostream>
#include <vector>
#include <algorithm>
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
  bool isSameTree(TreeNode *p, TreeNode *q) {
    return check(p,q);
  }
  bool check(TreeNode *p, TreeNode *q)
  {
    if (!q && !p) return true;
    if (q && !p || !q && p || p->val != q->val) return false;
    return check(p->left, q->left) && check(p->right, q->right);
  }
};

int main()
{
  Solution slu;
  TreeNode *h = new TreeNode(2);
  h->left = new TreeNode(3);
  h->right = new TreeNode(1);
  bool res = slu.isSameTree(h, h);
  cout <<res<< endl;
  system("pause");
}
#endif
