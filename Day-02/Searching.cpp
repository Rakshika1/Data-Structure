#include "linkedlist.h"
void Search(Node *head, int value)
{
    //  search 40 is presne or not
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            cout << "THIS NODE IS PRESENT" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "THIS NODE IS NOT PRESNET";
}

int main()
{
    Node *head = createList();
    int value;
    cin >> value;
    Search(head, value);
}