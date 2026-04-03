#include <iostream>
using namespace std;

int length(char ch[])
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}

void revereString(char ch[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(ch[left], ch[right]);
        left++;
        right--;
    }
}

int main()
{
    char ch[100];
    cin >> ch;
    int size = length(ch);
    cout << size;
    revereString(ch, size);
    cout << ch;
    return 0;
}

/*
Time Complexity: O(N), where N is length of char array
Space Complexity: O(1)
*/
/*