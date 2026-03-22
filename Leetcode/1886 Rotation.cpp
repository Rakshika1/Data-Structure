#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col = mat[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
}

void reverse(vector<vector<int>> &mat)
{
    int row = mat.size();
    int col = mat[0].size();
    for (int i = 0; i < row; i++)
    {
        int left = 0, right = col - 1;
        while (left < right)
        {
            swap(mat[i][left], mat[i][right]);
            left++;
            right--;
        }
    }
}

bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
{
    for (int i = 0; i < 4; i++)
    {
        transpose(mat);
        reverse(mat);
        if (mat == target)
            return true;
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{0, 1}, {1, 0}};
    vector<vector<int>> target = {{1, 0}, {0, 1}};

    if (findRotation(mat, target))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
