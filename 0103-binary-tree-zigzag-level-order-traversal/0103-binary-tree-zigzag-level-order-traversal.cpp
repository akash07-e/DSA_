class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> finalans;

        if (root == NULL)
            return finalans;

        queue<TreeNode*> q;
        q.push(root);

        int level = 1;

        while (!q.empty()) {

            int size = q.size();
            vector<int> ans;

            for (int i = 0; i < size; i++) {

                TreeNode* temp = q.front();
                q.pop();

                ans.push_back(temp->val);

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            // Reverse values on even levels
            if (level % 2 == 0) {
                reverse(ans.begin(), ans.end());
            }

            finalans.push_back(ans);
            level++;
        }

        return finalans;
    }
};