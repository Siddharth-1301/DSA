#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Your code goes here
    int n,m;
    cout<<"n:";cin>>n;cout<<"m:";cin >>m;
    int adj[n+1][n+1]={0};
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;//Only this line for directed graph
        // For undirected graph, uncomment the next line
        // adj[v][u]=1; // For undirected graph
        /* code */
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}