#include <iostream>

struct Node {
    int data;
    Node *next;
};

bool look_up(Node* head, int data){
    Node* current = head;
    while(current != nullptr) {
        if(current->data == data){
            return true;
        }
        current = current->next;
    }
    return false;
}

void add_node(Node* head, int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = head->next;
    head->next = new_node;  
}

int main(){
    Node *head = new Node();
    for(int i = 1; i < 10; ++i) {
        add_node(head, i);
    }

    std::cout << "Search returned: " << look_up(head, 8);

    std::cout << std::endl << "List contents: ";
    while(head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }

    
}
