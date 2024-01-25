/*
 * class Node
 * {
 * public:
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node() : data(0), left(nullptr), right(nullptr){};
 *     Node(int x) : data(x), left(nullptr), right(nullptr) {}
 *     Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
 * };
 */

int minVal(Node* root){

    // Write your code here.

    int mini=INT_MAX;

    if(root==NULL)return -1;

    while(root!=NULL){

          if (mini > root->data) {

               mini = min(root->data,mini);

            root = root->left;

          

          }

          else if(mini<root->data){

              mini= min(root->data,mini);

              root = root->right;

              

          }

        }

        return mini;    

}

