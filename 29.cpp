#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool validate(TreeNode* root, int lower, int upper) {
        if (!root) return true;
        if (!(root->val>lower && root->val<upper)) return false;
        return (validate(root->left, lower, root->val) && validate(root->right, root->val, upper));
    }
    bool isValidBST(TreeNode* root) {
        return validate(root, INT_MIN, INT_MAX);
    }
};