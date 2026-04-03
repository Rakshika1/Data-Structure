#include <bits/stdc++.h>
using namespace std;

int main()
{

    string sequence;

    cin >> sequence;
    int max = 0;
    int count = 0;

    map<char, int> frequency;
    // count the frequency of each character

    for (int i = 0; i < sequence.length(); i++)
    {
        frequency[sequence[i]]++;
    }
    int maxCount = 0;
    char maxChar;
    // finding the maximu frequencies
    for (auto i : frequency)
    {
        if (i.second > maxCount)
        {
            maxCount = i.second;
            maxChar = i.first;
        }
    }
    cout << maxCount;
}