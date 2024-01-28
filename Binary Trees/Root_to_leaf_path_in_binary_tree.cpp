/********************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode {
        public :
        int data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
    
********************************************************************/

void getPaths(BinaryTreeNode<int> * root,vector<string>&ans,vector<int>&res){
    if(root == NULL){
        return;
    }
    res.push_back(root->data);
    if(root->left) getPaths(root->left,ans,res);
    if(root->right) getPaths(root->right,ans,res);
    if(root->left == NULL && root->right == NULL){
        string s = "";
        for (auto x : res) {
          s += to_string(x);
          s += " ";
        }
        ans.push_back(s);
    }
    res.pop_back();
}

vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    // Write your code here.
    vector<string>ans;
    if(root == NULL){
        return ans;
    }
    vector<int>res;
    getPaths(root,ans,res);

    return ans;
    
}