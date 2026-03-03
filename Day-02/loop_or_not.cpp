#include "linkedlist.h"

void loop_or_not(Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while (slow != fast)
    {
        if (fast == NULL || fast->next == NULL)
        {
            cout << "THERE IS NO LOOP PRESENT" << endl;
            return;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "LOOP IS THERE HURRY!!!";
}

int main()
{
    Node *head = createList();
    loop_or_not(head);
}