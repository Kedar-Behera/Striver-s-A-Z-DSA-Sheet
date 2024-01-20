/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here  
    if(head == NULL || head->next == NULL){
        return head;
    } 
    Node*previous = NULL;
    Node*current = head;
    while(current != NULL){
        previous = current->prev;
        current->prev = current->next;
        current->next = previous;
        current = current->prev;
    }
    return previous->prev;
}

