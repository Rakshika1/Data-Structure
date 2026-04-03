int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    int item;

    // enqueue n elements
    for(int i = 0; i < n; i++){
        cin >> item;
        enqueue(arr, item);
    }

    // display queue
    display(arr);

    return 0;
}