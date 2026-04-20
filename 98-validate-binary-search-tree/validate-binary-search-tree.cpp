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

    vector<int> tree;

    void treetraversal(TreeNode* node){
        if(!node){
            return ;
        }

        treetraversal(node->left);
        tree.push_back(node->val);
        treetraversal(node->right);
    }

    bool isValidBST(TreeNode* root) {
        treetraversal(root);

        int n = tree.size();

        for(int i=0;i<n-1;i++){
            if(tree[i] >= tree[i+1])
                return false;
        }
        return true;
    }
};