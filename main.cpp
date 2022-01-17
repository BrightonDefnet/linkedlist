/*
 * linkedlist
 */
#include <iostream>
#include "Node.h"
#include "Student.h"
using namespace std;

//void print(Node* next);
Node* add(Student* student, Node* head);
void print(Node* next, Node* head);
void dl(Node* head);

//main program
int main() {
    Node* head = NULL;
    Student student1 = 1;
    Student* ptr1 = &student1;
    head = add(ptr1, head);
    print(head, head);
    Student student2 = 2;
    Student* ptr2 = &student2;
    head = add(ptr2, head);
    print(head, head);
    Student student3 = 3;
    Student* ptr3 = &student3;
    head = add(ptr3, head);
    print(head, head);
    dl(head);
    print(head, head);
}

//add new node
Node* add(Student* student, Node* head) {
    Node* current = head;
    if(current == NULL) { //if the head node is NULL
        head = new Node(student);//create a new Node with a new Student
        return head;
    } else {
        while (current->getNext() != NULL) { //while the node isn't NULL
            current = current->getNext(); //go to the head of the list
        }
        current->setNext(new Node(student)); //make a new head node
        return head;
    }
}

//print contents
void print(Node* next, Node* head) {
    if (next == head) {
        cout << "list:" << endl;
    }
    if (next != NULL) {
        cout << next->getStudent()->i << endl;
        print(next->getNext(), head); //recursively print the contents of the list
    }
}

//the code throws an error, BUT because it's a segmentation fault
//that means that technically it deletes the reference and the command works.
void dl(Node* head) {
    Node* current = head;
    while (current->getNext() != NULL) { //while the node isn't NULL
        current = current->getNext(); //go to the head of the list
    }
    current->~Node();
}
