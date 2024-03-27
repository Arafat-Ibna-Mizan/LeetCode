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
    int total=0;
    int sumNumbers(TreeNode* root) {
        makeNum(root,0);
        return total;
    }
    void makeNum(TreeNode* root, int sum){
        if(root==NULL){
            return;
        }
        sum=sum*10+root->val;
        if(root->left==NULL && root->right==NULL){
            total+=sum;
            return;
        }
        makeNum(root->left,sum);
        makeNum(root->right,sum);
    }
};