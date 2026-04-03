#include "linkedlist.h"

void Deletion(Node *&head)
{
    // delete 40 ;
    Node *temp = head;
    // 10-> 20->30->40->50
    while (temp->next->data != 40)
    {
        temp = temp->next;
    }
    Node *prev = temp;
    temp = temp->next;
    Node *next1 = temp->next;
    free(temp);
    prev->next = next1;
}
int main()
{
    Node *head = createList();
    Deletion(head);
    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Node1 | Address:for" << temp << " | Data: " << temp->data << " | Next: " << temp->next << endl;
        temp = temp->next;
    }
}