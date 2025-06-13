#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
private:
    void bfs(int rowSize, int colSize, int row, int col,
             vector<vector<int>> &vis, vector<vector<int>> &grid) {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        // Directions for 8 directions (vertical, horizontal, diagonal)
        vector<int> dr = {-1, -1, -1, 0, 1, 1, 1, 0}; // row deltas
        vector<int> dc = {-1, 0, 1, 1, 1, 0, -1, -1}; // col deltas

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 8; i++) {
                int newR = r + dr[i];
                int newC = c + dc[i];
                if (newR >= 0 && newR < rowSize && newC >= 0 && newC < colSize &&
                    grid[newR][newC] == 1 && vis[newR][newC] == 0) {
                    vis[newR][newC] = 1;
                    q.push({newR, newC});
                }
            }
        }
    }

public:
    int NumberofIslands(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] == 0) {
                    count++;
                    bfs(n, m, i, j, vis, grid);
                }
            }
        }
        return count;
    }
};

int main() {
    vector<vector<int>> grid = {
        {1, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 1},
        {0, 0, 0, 1}
    };
    Solution obj;
    cout << "Number of Islands: " << obj.NumberofIslands(grid) << endl;
    return 0;
}

