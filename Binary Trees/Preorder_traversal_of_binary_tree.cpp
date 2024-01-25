/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>

void helper(TreeNode<int>*root,vector<int>& ans){
    if(root == NULL){
        return;
    }
    ans.push_back(root->data);
    helper(root->left,ans);
    helper(root->right,ans);
}

vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int>ans;
    helper(root,ans);

    return ans;
}
