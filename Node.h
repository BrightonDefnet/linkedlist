/*
 * Node
 */
#ifndef NODE_h
#define NODE_h
#include <iostream>
using namespace std;

class Node {

    public:
        Node(); //create an instance of a Node
        ~Node(); //destroy an instance of a Node
        void setValue(int newvalue); //set the value in a Node
        int getValue(); //get the value stored in a Node
        void setNext(Node* newnext); //set the next Node
        Node* getNext(); //get the next Node

    private:
        int value; //value of the Node
        Node* next; //pointer to the next Node
};
#endif
