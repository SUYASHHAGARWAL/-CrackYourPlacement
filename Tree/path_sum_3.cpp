/*

day26


class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        std::unordered_map<long, int> prefixSumCount;
        prefixSumCount[0] = 1; 
        return dfs(root, 0, targetSum, prefixSumCount);
    }

private:
    int dfs(TreeNode* node, long currentSum, int targetSum, std::unordered_map<long, int>& prefixSumCount) {
        if (node == nullptr) return 0;

        currentSum += node->val;
        int count = prefixSumCount[currentSum - targetSum];

        prefixSumCount[currentSum]++;
        count += dfs(node->left, currentSum, targetSum, prefixSumCount);
        count += dfs(node->right, currentSum, targetSum, prefixSumCount);
        prefixSumCount[currentSum]--;
        
        return count;
    }
};


*/