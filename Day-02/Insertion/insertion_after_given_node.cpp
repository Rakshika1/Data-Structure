#include "linkedlist.h"
#include "complexity.h"

#include <iostream>


void insertion_at_end(Node *head)
{
    // insert 60 after 30
    Node *newNode = new Node();
    newNode->data = 60;
    Node *temp;
    while (head != NULL)
    {
        if (head->data == 30)
        {
            temp = head->next;
            break;
        }
        head = head->next;
    }
    head->next = newNode;
    newNode->next = temp;
}

int main()
{
    Node *head = createList();
    insertion_at_end(head);
    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Node1 | Address:for" << temp << " | Data: " << temp->data << " | Next: " << temp->next << endl;
        temp = temp->next;
    }
}