class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int left_ans = maxDepth(root->left);
        int right_ans = maxDepth(root->right);
        int ans = max(left_ans,right_ans);
        return 1+ans;
    }
};