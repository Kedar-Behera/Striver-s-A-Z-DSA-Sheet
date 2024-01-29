/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

int find_Predecessor(TreeNode*root,int key){
    int predecessor = -1;
    while(root != NULL){
        if(key<=root->data){
            root = root->left;
        }
        else{
            predecessor = root->data;
            root = root->right;
        }
    }
    return predecessor;
}

int find_Sucessor(TreeNode* root,int key){
    int sucessor = -1;
    while(root != NULL){
        if(key>=root->data){
            root = root->right;
        }
        else{
            sucessor = root->data;
            root = root->left;
        }
    }
    return sucessor;
}

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    pair<int,int>ans;

    int predecessor = find_Predecessor(root,key);
    int sucessor = find_Sucessor(root,key);
    ans.first = predecessor;
    ans.second = sucessor;
    return ans;
}