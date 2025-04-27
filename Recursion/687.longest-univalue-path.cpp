/*
 * @lc app=leetcode id=687 lang=cpp
 *
 * [687] Longest Univalue Path
 */

// @lc code=start

 /* Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/
class Solution {
    int ans;
public:
    // int max(int a, int b) {
    //     return a>b ? a : b;
    // }
    int solve(TreeNode* root, int n){
        if(root==nullptr) return 0;
        int left=solve(root->left, root->val);
        int right=solve(root->right, root->val);
        ans=max(ans, left+right);
        return root->val==n? max(left,right)+1 : 0;
    }

    int longestUnivaluePath(TreeNode* root) {
        solve(root, -1);
        return ans;
    }
};
// @lc code=end

