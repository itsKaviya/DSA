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
    map<int,int> freq;

    void solve(TreeNode* node){
        if(!node)
            return;

        freq[node->val]++;
        solve(node->left);
        solve(node->right); 
    }

    vector<int> findMode(TreeNode* root) {
        solve(root);

        int maxfreq = 0;
        for(auto i : freq){
            if(i.second > maxfreq){
                maxfreq = i.second;
            }
        }

        vector<int> res;
        for(auto j : freq){
            if(j.second == maxfreq){
                res.push_back(j.first);
            }
        }

        return res;
    }
};