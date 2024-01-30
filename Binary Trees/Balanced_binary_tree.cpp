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

    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left_height = height(root->left);
        int right_height = height(root->right);
        int max_height = max(left_height,right_height)+1;
        return max_height;
    }

    void inorderUtil(TreeNode* root,bool &ans){
        if(root != NULL){
            inorderUtil(root->left,ans);
            int lh = height(root->left);
            int rh = height(root->right);
            if(abs(lh-rh)>1){
                ans = ans && false;
            }

            inorderUtil(root->right,ans);
        }

    }
    
    
    bool isBalanced(TreeNode* root) {
        
        bool ans = true;
        inorderUtil(root,ans);
        return ans;
    }
};