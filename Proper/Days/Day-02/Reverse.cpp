#include "linkedlist.h"

void Reverse(Node *&head)
{
    // 10->20->30->40->50
    //  10<- 20<-30<-40<-50
    Node *prev = NULL;
    Node *curr = head;
    Node *next;
    while (curr != NULL)
    {                      // last node bhi handle karni hai
        next = curr->next; // 1. next bachao
        curr->next = prev; // 2. arrow ulta kaor
        prev = curr;       // prev aage
        curr = next;       // curr aage
    }
    head = prev; // update the head
}

int main()
{
    Node *head = createList();
    Reverse(head);
    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Node1 | Address:for" << temp << " | Data: " << temp->data << " | Next: " << temp->next << endl;
        temp = temp->next;
    }
}