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
    int sumRoot(TreeNode* root,int c)
    {
        if(root==NULL) return 0;
        c=c*10+root->val;
        if(root->left==NULL && root->right==NULL) return c;
        return sumRoot(root->left,c)+sumRoot(root->right,c);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        sum=sumRoot(root,0);
        return sum;
    }
};