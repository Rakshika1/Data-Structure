#include <iostream>

// namespace
// Give me access to the territory called STD
// so I don't have to mention its name every time"
using namespace std;

// blueprint
// Jab bhi main Node banaunga —
//  uske andar 2 cheezein hongi: data aur next"
struct Node
{
    int data;   // 4byte
    Node *next; // system 64 bit ka hai
    // it means 8byte address store karega pointer
    // so ek node total 12 byte
    // but padding ram multiple of 8
    // require 16 byte
};

// allocate memory
// 1. static  Node mynode;
// 2. dynamic
// Node* newNode = (Node*)malloc(sizeof(Node));
// Node* newNode = new Node();
// make a new node and store its address in newNode

// Node* - ek pointer jo node ka address store karega
//  newNode - us pointer ka naam hai newnode
//  new = ram mein jao aur new jagah lo
// node() = node ki shape mein banao
int main()
{
    Node *Node1 = new Node();
    Node *Node2 = new Node();
    Node *Node3 = new Node();
    Node *Node4 = new Node();
    Node *Node5 = new Node();
    cout << "RAM mein Address:" << Node1 << endl;
    cout << "RAM mein Address:" << Node2 << endl;
    cout << "RAM mein Address:" << Node3 << endl;
    cout << "RAM mein Address:" << Node4 << endl;
    cout << "RAM mein Address:" << Node5 << endl;

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = Node5;
    Node5->next = NULL;

    // adding the data
    Node1->data = 10;
    Node2->data = 20;
    Node3->data = 30;
    Node4->data = 40;
    Node5->data = 50;

    cout << "Node1 | Address: " << Node1 << " | Data: " << Node1->data << " | Next: " << Node1->next << endl;
    cout << "Node2 | Address: " << Node2 << " | Data: " << Node2->data << " | Next: " << Node2->next << endl;
    cout << "Node3 | Address: " << Node3 << " | Data: " << Node3->data << " | Next: " << Node3->next << endl;
    cout << "Node4 | Address: " << Node4 << " | Data: " << Node4->data << " | Next: " << Node4->next << endl;
    cout << "Node5 | Address: " << Node5 << " | Data: " << Node5->data << " | Next: " << Node5->next << endl;
}
