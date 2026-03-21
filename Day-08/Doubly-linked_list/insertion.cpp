#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void insertfront(Node* &head, Node* &tail, int value)
{
    // take user input to enter the value
   // create new node
    Node *newNode = new Node(value);
    // id list is empty 
    // new node is both head nad tail
    if(head == nullptr){
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;


}
void insertend(Node* &head, Node* &tail, int value)
{
    //step 1 make the new node 
    Node* newNode = new Node();
    Node* p;
    p = head;
    newNode->next = NULL;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next= newNode;
    newNode->prev 


}
void printForward(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data;
        if (curr->next)
            cout << " <-> ";
        curr = curr->next;
    }
    cout << endl;
}
int main()
{

    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    Node *n6 = new Node(60);

    // Link them together ;/
    // forwrad linking
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = NULL;

    // backard linking
    n1->prev = NULL;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;
    n5->prev = n4;
    n6->prev = n5;

    // Head and tail

    Node *head = n1;
    Node *tail = n6;

    cout << "Orginial list\n";
    printForward(head);

    //Insert 5 at front ;
    insertfront(head,tail ,5);
    cout << "\n After inserting 5 at the fornt ";
    printForward(head);

    // print forward

    return 0;
    // we tell the os that the progarms finished successfully
    // without any errors
}