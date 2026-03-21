#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<vector<int>>& matrix) {
    // write your transpose code here
    int rows = matrix.size();        // number of rows
int cols = matrix[0].size();     // number of columns
    for(int row=0;row<rows;row++){
        for(int col=0;col<cols;col++){
            if(col>row){
                            swap(matrix[row][col],matrix[col][row]);

            }
        }
    }
}
void reverse(vector<vector<int>>& matrix){
    
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    for(int row =0;row<rows;row++){
        int left =0;
        int right = cols -1;
        while(left<right){
            swap(matrix[row][left],matrix[row][right]);
            left++;
            right--;
        }
    }
  
    
}


int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    transpose(matrix);
    reverse(matrix);
    for(auto row : matrix) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}