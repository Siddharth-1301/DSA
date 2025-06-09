#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Your code goes here
    int n, m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        // For undirected graph, uncomment the next line
       adj[v].push_back(u);
        /* code */
    }
    for (int i = 1; i <= n; i++)
    {
         cout << "Node " << i << ": ";
        for (int j=0; j< adj[i].size(); j++)
        {
            /* code */
            cout<<adj[i][j]<<" ";
        }
        
       cout<<endl;
        
    }
    
    
    return 0;
}