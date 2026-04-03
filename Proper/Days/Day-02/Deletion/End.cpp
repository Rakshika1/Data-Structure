#include "linkedlist.h"
#include <iostream>

// 10->20->30->40->50
void deletion(Node *&head)
{
    // delete last node
    Node* temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

int main()
{
    Node *head = createList();
    deletion(head);
    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Node1 | Address:for" << temp << " | Data: " << temp->data << " | Next: " << temp->next << endl;
        temp = temp->next;
    }
}