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
    void VOT(TreeNode* root,map<int,map<int,vector<int>>>&m,int hd,int level)
    {
        if(root==NULL) return;
        m[hd][level].push_back(root->val);
        VOT(root->left,m,hd-1,level+1);
        VOT(root->right,m,hd+1,level+1);

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>>m;
        VOT(root,m,0,0);
        vector<vector<int>>v1;
        for(auto i:m)
        {
            vector<int>v2;
            for(auto j:i.second)
            {
                sort(j.second.begin(),j.second.end());
                for(auto i:j.second) v2.push_back(i);
            }
            v1.push_back(v2);
        }

    return v1;    
    }
};