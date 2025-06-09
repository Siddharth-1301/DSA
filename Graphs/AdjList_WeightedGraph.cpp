#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Your code goes here
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>adj[n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        // adj[v].push_back({u,wt}); // Uncomment this line for undirected graph

        /* code */
    }
    for (int i = 1; i <=n; i++)
    {
        for(int j=0;j<adj[i].size();j++){
             cout << "(" << adj[i][j].first << ", " << adj[i][j].second << ") ";
        }
        cout << endl;
        /* code */
    }
    
    
    return 0;
}