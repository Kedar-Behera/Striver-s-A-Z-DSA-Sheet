/****************************************************************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int>*temp = head;
    int count = 0;
    while(temp != NULL){
        if(temp->data == k){
            count = 1;
            break;
        }
        else{
            temp = temp->next;
        }
    }
    if(count){
        return 1;
    }
    else{
        return 0;
    }
}