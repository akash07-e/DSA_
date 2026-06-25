/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void call(TreeNode* root, vector<vector<int>>& finalans, int level) {

        if (root == NULL)
            return;

        finalans[level].push_back(root->val);
        call(root->left, finalans, level + 1);
        call(root->right, finalans, level + 1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> finalans;
        int n = levels(root);
        for (int i = 0; i <n; i++) {
            vector<int> ans;

            finalans.push_back(ans);
        }
        //above loop use to create the n empty space in finalans according to level
        call(root, finalans, 0);
        return finalans;
    }
};