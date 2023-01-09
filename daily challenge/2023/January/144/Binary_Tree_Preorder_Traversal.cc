// Link: https://leetcode.com/problems/binary-tree-preorder-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    void dfs(TreeNode* node){
        if(node==NULL)return;
        v.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        v.clear();
        dfs(root);
        return v;
    }
};
