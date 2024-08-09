/*

day25

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
 
class Solution {
public:
vector<int> rightSideView(TreeNode* a) {
        vector<int> v;
        DFS(a,0,v);
        // BFS(a,v);
        return v;
    }

    // DFS
    void DFS(TreeNode* a,int lvl,vector<int>&v)
    {
        if(!a)return;

        if(lvl==v.size()) v.push_back(a->val);

        DFS(a->right,lvl+1,v);
        DFS(a->left,lvl+1,v);
    }

    // BFS
    void BFS(TreeNode* a,vector<int>&v)
    {
        if(!a)return;
        queue<TreeNode*>q;
        q.push(a);

        while(!q.empty())
        {
            int size =q.size(),rightmost ;

            // Traversing Level !!
            for(int i=0;i<size;i++)
            {
                a=q.front();q.pop();
                rightmost=a->val;

                if(a->left)q.push(a->left);
                if(a->right)q.push(a->right);
            }
            // After Travesing Lvl, Push it's Righmost !!
            v.push_back(rightmost);
        }
    }
};

*/