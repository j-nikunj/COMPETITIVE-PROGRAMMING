/*
 * @lc app=leetcode id=662 lang=cpp
 *
 * [662] Maximum Width of Binary Tree
 */

// @lc code=start
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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        queue<pair<TreeNode*, long long int>> nodes;
        nodes.push({root, 0});
        int ans = 0;
        while(!nodes.empty()) {
            long long int sz = nodes.size();
            long long int minIdx = nodes.front().second;
            long long int first, last;
            for (long long int i = 0; i < sz; i++) {
                long long int curIdx = nodes.front().second - minIdx;
                TreeNode* node = nodes.front().first;
                nodes.pop();
                if (i == 0) first = curIdx;
                if (i == sz-1) last = curIdx;
                if (node->left) nodes.push({node->left, 2*curIdx+1});
                if (node->right) nodes.push({node->right, 2*curIdx+2});
            }
            ans = max(int(ans), int(last-first+1));
        }
        return ans;
    }
};
// @lc code=end

