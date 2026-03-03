#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

// blueprint
struct Node
{
    int data;
    Node *next;
};

// ready made LL banane ka function
Node *createList()
{
    Node *Node1 = new Node();
    Node *Node2 = new Node();
    Node *Node3 = new Node();
    Node *Node4 = new Node();
    Node *Node5 = new Node();

    Node1->data = 10;
    Node2->data = 20;
    Node3->data = 30;
    Node4->data = 40;
    Node5->data = 50;


    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = Node4;
    Node4->next = Node5;
    Node5->next = NULL;

    return Node1; // pehla node return karo
}

#endif