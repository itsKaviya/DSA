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
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }

        int lheight = minDepth(root->left);
        int rheight = minDepth(root->right);

        if(!root->left || !root->right){
            return 1 + max(lheight, rheight);
        }
        else{
            return 1 + min(lheight, rheight);
        }
    }
};