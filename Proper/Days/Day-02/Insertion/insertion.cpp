#include "linkedlist.h"
using namespace std;

void insertion_at_end(Node *head)
{
    // add 10 ko;
    Node *newNode = new Node();
    newNode->data = 100;
    newNode->next = NULL;
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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