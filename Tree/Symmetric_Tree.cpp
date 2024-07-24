/*

day8

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
    bool isEqual(TreeNode *root1, TreeNode *root2)
    {
        if (root1 && root2) // if both nodes are not null
        {
            if (root1->val == root2->val) // If siblings are same
            {
                return isEqual(root1->left, root2->right) && isEqual(root1->right, root2->left); // step two recursion part
            }
            return false;
        }
        if (!root1 && !root2) // if both are null
            return true;
        return false; // if one is null but other is not null then return false
    }

    bool isSymmetric(TreeNode *root)
    {
        return isEqual(root->left, root->right);
    }
};

*/