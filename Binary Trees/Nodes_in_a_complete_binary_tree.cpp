#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

int findLeftHeight(BinaryTreeNode<int>* root)

{

    int h=0;

    while(root)

    {

        h++;

        root=root->left;

    }

    return h;

}

int findRightHeight(BinaryTreeNode<int>* root)

{

    int h=0;

    while(root)

    {

        h++;

        root=root->right;

    }

    return h;

}

int countNodes(BinaryTreeNode<int> *root) {

  // Write your code here.

    if(!root)

        return 0;

    int lh=findLeftHeight(root);

    int rh=findRightHeight(root);

    if(lh==rh)

        return ((1<<lh)-1);

    return 1+countNodes(root->left)+countNodes(root->right);

}