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
    int post_index;

    TreeNode* Tree_gen(vector<int>& inorder, vector<int>& postorder, int i_start, int i_end) {
        if (i_start > i_end) {
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[post_index]);
        post_index--;

        int in_index;
        for (int i = i_start; i <= i_end; i++) {
            if (inorder[i] == root->val) {
                in_index = i;
                break;
            }
        }
        root->right = Tree_gen(inorder, postorder, in_index + 1, i_end);
        root->left = Tree_gen(inorder, postorder, i_start, in_index - 1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int in_size = inorder.size(); 
        post_index = postorder.size() - 1;
        TreeNode* result = Tree_gen(inorder, postorder, 0, in_size - 1);
        return result;
    }
};
