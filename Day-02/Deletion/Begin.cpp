#include "linkedlist.h"
#include <iostream>

// pass by refernce 
void Deletion_at_Begin(Node* &head){
    // 10 delete 
    Node* temp = head ;
    head = head->next; // here only local copy change
    free(temp);


}
int main()
{
    Node *head = createList();
    Deletion_at_Begin(head);
     Node *temp = head;

    while (temp != NULL)
    {
        cout << "Node1 | Address:for" << temp << " | Data: " << temp->data << " | Next: " << temp->next << endl;
        temp = temp->next;
    }

}