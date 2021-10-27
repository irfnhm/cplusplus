// linked list insert, delete and show

#include <iostream>

using std::cout;
using std::endl;

// init node
class Node {
    public:
        int data;
        Node *next;
};

class LinkedList {
    public:
        void insertNode(Node** head, int data);
        void insertNodeAfter();
        void appendNode();
        void showAllNodes(Node *node);
        void deleteNode();
};

void LinkedList::insertNode(Node** head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void LinkedList::showAllNodes(Node *node){
    while(node != NULL){
        cout << " " << node->data;
        node = node->next;
    }
}

int main(){
    LinkedList obj;
    Node* head = NULL;
    for(int i =2; i <= 5; ++i) {
        obj.insertNode(&head, i);
    }
    std::cout << " The list is: "; 
    obj.showAllNodes(head);
}
