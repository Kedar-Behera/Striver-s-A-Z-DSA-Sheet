/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/

Node* createTree(vector<int>&arr){
    // Write your code here.
    Node* root = new Node(arr[0]);
    queue<Node*>q;
    q.push(root);
    int i = 1;
    while(i<arr.size()){
        Node*front = q.front();
        q.pop();
        if(front->left == NULL){
            front->left = new Node(arr[i]);
            q.push(front->left);
            i++;
        }
        if(front->right == NULL){
            front->right = new Node(arr[i]);
            q.push(front->right);
            i++;
        }
    }

    return root;

    
}