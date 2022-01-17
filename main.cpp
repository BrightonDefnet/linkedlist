/*
 * linkedlist
 */
#include <iostream>
#include "Node.h"
using namespace std;

void add(int newline);
void print(Node* next);
Node* head = NULL;

//main program
int main() {
    add(1);
    print(head);
    add(2);
    print(head);
    add(3);
    print(head);
}

//add new node
void add(int newvalue) {
    Node* current = head;
    if(current == NULL) { //if the head node is NULL
        head = new Node(); //create a new Node
        head->setValue(newvalue); //set the new Node to the specified value
    } else {
        while (current->getNext() != NULL) { //while the node isn't NULL
            current = current->getNext(); //go to the head of the list
        }
        current->setNext(new Node()); //make a new head node
        current->getNext()->setValue(newvalue); //set the value of the next node
    }
}

//print contents
void print(Node* next) {
    if (next == head) {
        cout << "list:" << endl;
    }
    if (next != NULL) {
        cout << next->getValue() << endl;
        print(next->getNext()); //recursively print the contents of the list
    }
}
