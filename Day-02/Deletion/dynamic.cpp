#include "linkedlist.h"
#include <iostream>

void Deletion(Node *&head, int value)
{
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return;
    }

    Node *temp = head;
    while (temp->next != NULL && temp->next->data != value) // ✅ NULL check bhi
    {
        temp = temp->next;
    }

    // Agar value mili hi nahi
    if (temp->next == NULL)
    {
        cout << "Value nahi mili!" << endl;
        return;
    }
    Node *prev = temp;
    temp = temp->next;
    Node *next1 = temp->next; // pehle next bachao
    free(temp);               // phir free karo
    prev->next = next1;       // connect karo
}
int main()
{
    Node *head = createList();

    int value;
    cout << "Konsa node delete karna hai? ";
    cin >> value; // ✅ user se input lo

    Deletion(head, value);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << "Data: " << temp->data << " | Next: " << temp->next << endl;
        temp = temp->next;
    }
}