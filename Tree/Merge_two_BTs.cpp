/*

day9

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
    void inorder(TreeNode* root,vector<int> &ans){
        if (root == NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* buildTree(vector<int>& v, int index) {
    if (index >= v.size()) {
        return NULL;
    }
    TreeNode* root = new TreeNode(v[index]);
    root->left = buildTree(v, 2 * index + 1);
    root->right = buildTree(v, 2 * index + 2);
    return root;
}
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    if (root1 == NULL) return root2;
    if (root2 == NULL) return root1;

    TreeNode* newRoot = new TreeNode(root1->val + root2->val);
    newRoot->left = mergeTrees(root1->left, root2->left);
    newRoot->right = mergeTrees(root1->right, root2->right);

    return newRoot;
}
};

*/