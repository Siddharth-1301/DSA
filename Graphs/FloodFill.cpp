#include <iostream>
#include <vector>
using namespace std;

class Solution{
    private:
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int newColor,int iniColor){
        ans[row][col]=newColor;
        int n=image.size();
        int m=image[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nRow=row+delrow[i];
            int nCol=col+delcol[i];
            if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && image[nRow][nCol]==iniColor && ans[nRow][nCol]!=newColor){
                dfs(nRow,nCol,ans,image,newColor,iniColor);
            }
        }
    }

    public:
    vector<vector<int>> floodFill(vector<vector<int>>& image,int sr,int sc,int newColor){
        int iniColor=image[sr][sc];
        vector<vector<int>>ans=image; //This will create a copy of the image
        dfs(sr,sc,ans,image,newColor,iniColor);
        return ans;

    }
};
int main() {
   vector<vector<int>> image={
    {1,1,1},
   {1,1,0},
   {1,2,1}
   };
    int sr = 1, sc = 1, newColor = 2;
    Solution sol;
    vector<vector<int>>result=sol.floodFill(image,sr,sc,newColor);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout<<endl;
        /* code */
    }
    
    // Your code goes here
    
    return 0;
}