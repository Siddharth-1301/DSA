// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution{
// private:
// void dfs(int node,vector<int> adj[],vector<int>&visited,vector<int>&result){
//     visited[node]=1;
//     result.push_back(node);
//     for(auto it:adj[node]){
//         if(!visited[it]){
//             dfs(it,adj,visited,result);
//         }
//     }
// }
// public:
// int numProvinces(vector<int>adj[],int V){
//     vector<int>visited(V+1,0);
//     vector<int>result;
//     int count=0;
//     for(int i=1;i<=V;i++){
//         if(!visited[i]){
//             dfs(i,adj,visited,result);
//             count++;
//         }
//     }
//     return count;
// }

// };
// int main() {
//     // Your code goes here
//     int V=8;
//     vector<int>adj[V+1];
//     adj[1].push_back(2);
//     adj[2].push_back(1);
//     adj[2].push_back(3);
//     adj[3].push_back(2);

//     adj[4].push_back(5);
//     adj[5].push_back(4);
//     adj[5].push_back(6);
//     adj[6].push_back(5);

//     adj[7].push_back(8); 
//     adj[8].push_back(7);

//     Solution obj;
//     int provinces=obj.numProvinces(adj,V);
//     cout << "Number of Provinces: " << provinces << endl;
    
//     return 0;
// }


/* Using adjacency matrix */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited, int V) {
        visited[node] = 1;
        for (int i = 0; i < V; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                dfs(i, adj, visited, V);
            }
        }
    }

public:
    int numProvinces(vector<vector<int>>& adj, int V) {
        vector<int> visited(V, 0);
        int count = 0;
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, V);
                count++;
            }
        }
        return count;
    }
};

int main() {
    int V = 8;
    vector<vector<int>> adj(V, vector<int>(V, 0));

    // Component 1: 1-2-3
    adj[0][1] = adj[1][0] = 1;
    adj[1][2] = adj[2][1] = 1;

    // Component 2: 4-5-6
    adj[3][4] = adj[4][3] = 1;
    adj[4][5] = adj[5][4] = 1;

    // Component 3: 7-8
    adj[6][7] = adj[7][6] = 1;

    Solution obj;
    int provinces = obj.numProvinces(adj, V);
    cout << "Number of Provinces: " << provinces << endl;

    return 0;
}
