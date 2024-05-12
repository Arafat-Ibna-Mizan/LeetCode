class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorderRecursive(root, ans);
        return ans;
    }
    
    void preorderRecursive(TreeNode* root, vector<int>& result) {
        if (root == NULL) {
            return;
        }
        result.push_back(root->val); 
        preorderRecursive(root->left, result); 
        preorderRecursive(root->right, result);
    }
};
