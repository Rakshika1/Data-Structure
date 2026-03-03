#include "linkedlist.h"

void Circular(Node* &head)
{
    // 10,20,30,40,50,10
    Node *temp = head; // temp =100
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
}

int main()
{
    Node *head = createList(); 
    Circular(head);
    Node *temp = head;

   do
    {
        cout << "Node1 | Address:for" << temp << " | Data: " << temp->data << " | Next: " << temp->next << endl;
        temp = temp->next;
    }while(temp!=head);
}