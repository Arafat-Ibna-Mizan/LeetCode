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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avgList;
        if (root == NULL)
            return avgList;

        queue<TreeNode*> levelQueue;
        levelQueue.push(root);
        levelQueue.push(NULL);

        while (!levelQueue.empty() && levelQueue.front() != NULL) {
            double sum = 0;
            int nodes = 0;

            while (!levelQueue.empty() && levelQueue.front() != NULL) {
                TreeNode* node = levelQueue.front();
                levelQueue.pop();

                sum += node->val;
                nodes++;

                if (node->left != NULL) {
                    levelQueue.push(node->left);
                }
                if (node->right != NULL) {
                    levelQueue.push(node->right);
                }
            }

            levelQueue.pop();
            if (!levelQueue.empty()) {
                levelQueue.push(NULL);
            }
            avgList.push_back(sum / nodes);
        }

        return avgList;
    }
};