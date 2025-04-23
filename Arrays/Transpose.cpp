#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Your code goes here
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<vector<int>> transpose(matrix[0].size(),vector<int>(matrix.size()));
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
           matrix[i][j]=matrix[j][i];
            // rev
        }
        cout<<endl;
    }
    //reverse
    for(int i=0;i<matrix.size();i++){
     
        reverse(matrix[i].begin(),matrix[i].end());
    }
    for(int i=0;i<matrix.size();i++)
{
    for(int j=0;j<matrix[i].size();j++){
        cout<<matrix[i][j];
        cout<<" ";
    }
    cout<<endl;
}    return 0;
}