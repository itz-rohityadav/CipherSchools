#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize node with data and set next to NULL
    Node(int data_type) {
        this->data = data_type;
        this->next = NULL;
    }
};

// Function to display a node's data and next pointer
void display(Node* node) {
    cout << "Value: " << node->data;
    cout << " Address: " << node->next << endl;
}

int main() {
    // Creating nodes with values 3, 4, and 5
    Node* node1 = new Node(3);
    Node* node2 = new Node(4);
    Node* node3 = new Node(5);

    // Linking nodes to form a linked list
    node1->next = node2;
    node2->next = node3;

    // Displaying nodes
    display(node1);
    display(node2);
    display(node3);

    return 0;
}
