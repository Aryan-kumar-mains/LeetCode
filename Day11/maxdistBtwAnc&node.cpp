// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/

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
    void maxAncestorDiffUtil(TreeNode* root, int mx, int mn, int &ans){
        if(root == NULL) return;

        mx = max(root->val, mx);
        mn = min(root->val, mn);

        ans = max(ans, abs(mx - mn));

        maxAncestorDiffUtil(root->left, mx, mn, ans);
        maxAncestorDiffUtil(root->right, mx, mn, ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans = INT_MIN;
        maxAncestorDiffUtil(root, root->val, root->val, ans);
        return ans;
    }
};