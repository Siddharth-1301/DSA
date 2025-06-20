#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Solution{
    private:
    bool dfs(int node,vector<int>adj[],vector<int>&visited){
     queue<pair<int,int>>q;
     q.push({node,-1});
     visited[node]=1;
        while(!q.empty()){
            int currr=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(int it:adj[node]){
            if(!visited[it]){
                visited[it]=1;
                q.push({it,node});

            }else if(parent!=it){
                return true;}
            }
        }
        return false;
    }
    public:
    bool isCycle(int V,vector<int>adj[]){
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(dfs(i,adj,vis)) return true;
            }
        }
        return false;
    }
};
int main() {
    // Your code goes here
    
    int V=7;
    vector<int>adj[V+1];
    adj[1].push_back(2);
    adj[1].push_back(3);

    adj[2].push_back(1);
    adj[2].push_back(5);

    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[3].push_back(6);

    adj[4].push_back(3);

    adj[5].push_back(2);
    adj[5].push_back(7);

    adj[6].push_back(3);
    adj[6].push_back(7);

    adj[7].push_back(5);
    Solution obj;
    if(obj.isCycle(V,adj)){
        cout << "Cycle Detected" << endl;
    } else {
        cout << "No Cycle Detected" << endl;
    }
    return 0;
}