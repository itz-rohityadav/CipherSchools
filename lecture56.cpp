#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize node with data and set next to NULL
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to print the linked list from the head node
void printNode(Node* head) {
    if (head == NULL) {
        cout << "Linked list is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Initializing the head of the linked list
    Node* head = NULL; 
    printNode(head);

    // Creating and linking nodes
    Node* n1 = new Node(3);
    head = n1;
    printNode(head);

    Node* n2 = new Node(4);
    n1->next = n2;
    printNode(head);

    Node* n3 = new Node(5);
    n2->next = n3;
    printNode(head);

    Node* n4 = new Node(6);
    n3->next = n4;
    printNode(head);

    return 0;
}
