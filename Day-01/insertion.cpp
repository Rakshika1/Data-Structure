#include "linkedlist.h"
#include "complexity.h"

int main(){
    Node * head = createList();
    // insert node p = 65
    
    Node *newnode = new Node();
    newnode->data = 65;
    newnode->next = head;
    head = newnode;

    // print them

   // print karo
     // print karo
    // Node* temp = head;
    // while(temp != NULL){
    //     cout << "Address: " << temp << " | Data: " << temp->data << " | Next: " << temp->next << endl;
    //     temp = temp->next;
    // }
}