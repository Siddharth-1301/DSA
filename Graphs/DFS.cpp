#include <iostream>
#include <vector>
using namespace std;
class Solution{
private:
//Helper function for recrsive DFS
void dfsUtil(int node,vector<int> adj[],vector<int>&visited,vector<int>&ls){
    visited[node]=1;
    ls.push_back(node);
    for(auto it:adj[node] ){    // Adj List: 1->{2,3},2->{1,5,6},3->{1,4}.....  auto it : It titerates over the adjacency list of the node
       if(!visited[it]){
            dfsUtil(it,adj,visited,ls);
       }

    }
}

public:
vector<int> DFS(int v,vector<int>adj[]){
    vector<int>vis(v,0); //Visted array of size v initialized to 0 to keep track of visited nodes
    int start=0;
    vector<int>result;
    dfsUtil(1,adj,vis,result);
    return result;

}
};
int main() {
    // Your code goes here
    int V=9;// Number of vertices
    vector<int> adj[V]; // Adjacency list representation of the graph
    adj[1].push_back(2);
    adj[1].push_back(3);

    adj[2].push_back(1);
    adj[2].push_back(5);
    adj[2].push_back(6);

    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[3].push_back(7);

    adj[4].push_back(3);
    adj[4].push_back(8);

    adj[5].push_back(2);

    adj[6].push_back(2);

    adj[7].push_back(3);
    adj[7].push_back(8);

    adj[8].push_back(4);
    adj[8].push_back(7);


    Solution obj;
    vector<int> dfsResult=obj.DFS(V,adj);


    cout<<"DFS Traveral: ";
    for (int node:dfsResult)
    {
        cout<<node<<" ";
        /* code */
    }
    cout<<endl;






    return 0;
}