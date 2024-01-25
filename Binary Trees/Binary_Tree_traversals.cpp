/*

Following is Binary Tree Node structure:

class TreeNode

{

public:

int data;

TreeNode *left, *right;

TreeNode() : data(0), left(NULL), right(NULL) {}

TreeNode(int x) : data(x), left(NULL), right(NULL) {}

TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}

};

*/

 

void inorder(TreeNode *cur,vector<int> &ino)

{

if(cur==NULL)

return;

inorder(cur->left, ino);

ino.push_back(cur->data);

inorder(cur->right,ino);

}

void preorder(TreeNode *cur,vector<int> &pre)

{

if(cur==NULL)

return ;

pre.push_back(cur->data);

preorder(cur->left,pre);

preorder(cur->right,pre);

}

void postorder(TreeNode *cur,vector<int> &pos)

{

if(cur==NULL)

return ;

postorder(cur->left,pos);

postorder(cur->right,pos);

pos.push_back(cur->data);

 

}

 

vector<vector<int>> getTreeTraversal(TreeNode *root){

vector<vector<int>> mat(3);

inorder(root,mat[0]);

preorder(root,mat[1]);

postorder(root,mat[2]);

return mat;

}

