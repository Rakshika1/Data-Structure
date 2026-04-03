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
void convertToLowerCase(char ch[], int size)
{
    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] >= 'A' && ch[index] <= 'Z')
        {
            ch[index] = ch[index] - 'A' + 'a';
        }
        index++;
    }
}
void convertToUppercase(char ch[], int size)
{
    int index = 0;

    while (ch[index] != '\0')
    {
        if (ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}

int main()
{
    char ch[100];
    cin >> ch;
    int size = length(ch);
    // cout << size;
    convertToUppercase(ch, size);
    convertToLowerCase(ch, size);
    cout << ch;
    return 0;
}