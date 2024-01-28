vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    queue<BinaryTreeNode<int>*> q;
    
    if (root == NULL) {
        return ans;
    }
    
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        int val = 0;

        while (size > 0) {
            BinaryTreeNode<int>* temp = q.front();
            q.pop();
            val = temp->data;

            if (temp->right) {
                q.push(temp->right);
            }
            if (temp->left) {
                q.push(temp->left);
            }

            size--;
        }

        ans.push_back(val);
    }

    return ans;
}
