// LinkedList.cpp
// Created by Christine on 2/22/26
//
#include <iostream>
//apply namespace std
using namespace std;
struct Node {
    int data;
    Node* next;
};

// Adds new node to the end of the list
void insertEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }
}

void displaylist(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Implement deleteNode function based on the requirements
int main() {
    Node* head = nullptr;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    // Call deleteNode function as required
    return 0;
}