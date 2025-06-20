#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution{
    private:
    bool check(int start,int V,vector<int>adj[],int color[]){
        queue<int>q;
        q.push(0);// Start BFS from the first vertex
        color[start]=0;
        for(int i=0;i<V;i++){
            color[i]=-1;

        }
        while (!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            if(color[it]==-1){
              color[it]=1-color[node];  
              q.push(it);
            }else if(color[it]==color[node]){
                return false;
            }
            /* code */
        }
        return true;
    }
    public:
    bool isBipartite(int V,vector<int>adj[]){
        int color[V];
        for(int i=0;i<V;i++) color[i]=-1;
        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(check(i,V,adj,color)==false){
                    return false;
                }
            }
        }
        return true;
    }
};
int main() {
    // Your code goes here
    
    return 0;
}