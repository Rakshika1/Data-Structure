#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int front, rear, size;
    int *arr;

public:
    CircularQueue(int s)
    {
        size = s;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    // Insert the element
    void enqueue(int x)
    {

        // check is queue is full ornot
        if ((rear + 1) % size == front)
        {
            cout << "Queue is full \n";
        }

        // first element
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
    }

};

int main()
{
    CircularQueue q(5);
    // create a object name q
    // call te constructor (5)
    // internally s = 5;

    // inserting element in the queue;
    enqueue(2);
}