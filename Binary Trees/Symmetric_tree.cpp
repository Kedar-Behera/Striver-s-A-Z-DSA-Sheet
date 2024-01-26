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

    bool match(TreeNode* t1,TreeNode* t2){
        if(t1 != NULL && t2 != NULL){
            bool a = match(t1->left,t2->right);
            bool b = match(t1->right,t2->left);
            if(t1->val == t2->val && a && b){
                return true;
            }
            else{
                return false;
            }
        }
            else if(t1 == NULL && t2 == NULL){
                return true;
            }
            else{
                return false;
            }
        
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        bool ans = match(root->left,root->right);
        return ans;
        
    }
};