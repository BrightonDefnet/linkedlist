/*
 * linkedlist
 */
#include <iostream>
#include "Node.h"
#include "Student.h"
using namespace std;

void add();
//void print(Node* next);
void add(Student* student);
void print(Node* next);
Node* head = NULL;

//main program
int main() {
    Student student1 = 1;
    Student* ptr1 = &student1;
    add(ptr1);
    print(head);
    Student student2 = 2;
    Student* ptr2 = &student2;
    add(ptr2);
    print(head);
    Student student3 = 3;
    Student* ptr3 = &student3;
    add(ptr3);
    print(head);
}

//add new node
void add(Student* student) {
    Node* current = head;
    if(current == NULL) { //if the head node is NULL
        head = new Node(student); //create a new Node with a new Student
    } else {
        while (current->getNext() != NULL) { //while the node isn't NULL
            current = current->getNext(); //go to the head of the list
        }
        current->setNext(new Node(student)); //make a new head node
    }
}

//print contents
void print(Node* next) {
    if (next == head) {
        cout << "list:" << endl;
    }
    if (next != NULL) {
        cout << next->getStudent()->i << endl;
        print(next->getNext()); //recursively print the contents of the list
    }
}
