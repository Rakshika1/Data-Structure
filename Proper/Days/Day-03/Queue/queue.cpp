#include <bits/stdc++.h>
using namespace std;

int front = -1, rear = -1; // must be persistent!

void Enqueue(vector<int> &arr, int val)
{
    int n = arr.size();

    // Check overflow
    if (front == (rear + 1) % n)
    {
        cout << "OVERFLOW! Queue is full." << endl;
        return;
    }
    // First element
    else if (front == -1 && rear == -1)
    { // ✅ fixed comparison
        front = rear = 0;
        arr[rear] = val;
    }
    else
    {
        rear = (rear + 1) % n;
        arr[rear] = val;
    }
    cout << "Enqueued: " << val << endl;
}

void Dequeue(vector<int> &arr)
{
    int n = arr.size();

    if (front == -1)
    {
        cout << "UNDERFLOW! Queue is empty." << endl;
        return;
    }
    cout << "Dequeued: " << arr[front] << endl;

    // Last element removed
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

void Display(vector<int> &arr)
{
    if (front == -1)
    {
        cout << "Queue is empty." << endl;
        return;
    }
    int i = front;
    cout << "Queue: ";
    while (i != rear)
    {
        cout << arr[i] << " ";
        i = (i + 1) % arr.size();
    }
    cout << arr[rear] << endl;
}

int main()
{
    vector<int> arr(7); // fixed-size circular queue
    Enqueue(arr, 10);
    Enqueue(arr, 20);
    Enqueue(arr, 30);
    Display(arr);
    Dequeue(arr);
    Display(arr);
    return 0;
}