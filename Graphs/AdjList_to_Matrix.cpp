#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<vector<int>> adjListToMatrix(vector<vector<int>>&matrix){
        int n=matrix.size();

        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1){
                    adj[i].push_back(j);

                }
            }
        }
        return adj;

    }
};
int main(){
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>>matrix(n, vector<int>(n, 0));
    cout << "Enter the adjacency matrix:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }

    Solution obj;
    vector<vector<int>>adjList = obj.adjListToMatrix(matrix);

    cout << "Adjacency List:" << endl;
    for(int i=0; i<n; i++){
        cout << i << ": ";
        for(int j : adjList[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}