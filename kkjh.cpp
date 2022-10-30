class Solution {
public:
//     int dfs(vector<vector<int>>& grid , vector<vector<vector<int>>>&dp , vector<vector<int>> vis, int i , int j , int k)
//     {
//         int m = grid.size() , n = grid[0].size();
//         if(i>=m || i<0 || j>=n || j<0 || vis[i][j] == 1) return 1e9;
        
//         if(i == m-1 && j == n-1) return 0;
        
//         if(grid[i][j] == 1 && k <= 0) return 1e9;
//         if(grid[i][j] == 1) k--;
//         vis[i][j] = 1;
        
//         if(dp[i][j][k] != -1)
//             return dp[i][j][k];
        
//         int left = 0 , right = 0 , top = 0 , down = 0;
        
//         left = dfs(grid , dp , vis , i , j-1 , k);
//         right = dfs(grid , dp , vis , i , j+1 , k);
//         top = dfs(grid , dp , vis , i-1 , j , k);
//         down = dfs(grid , dp , vis , i+1 , j , k);
        
//         return dp[i][j][k] = 1 + min({left , right , top , down});
        
//     }
//     int shortestPath(vector<vector<int>>& grid, int k) {
        
//         int m = grid.size() , n = grid[0].size();
//         vector<vector<vector<int>>>dp(m , vector<vector<int>>(n , vector<int>(k+1 , -1)));
//         vector<vector<int>>vis(m , vector<int>(n , 0));
//         int ans = dfs(grid , dp , vis , 0 , 0 , k);
//         if(ans >= 1e9) ans = -1;
//         return ans;
//     }
    
    int shortestPath(vector<vector<int>>& grid, int l) {
        
        int m = grid.size() , n = grid[0].size() , ans = 1e9;
        
        queue<vector<int>>q;
        q.push({0 , 0 , 0 , l});
        vector<vector<int>>vis(m , vector<int>(n , -1));
        int dr[] = {0 , +1 , -1 , 0};
        int dc[] = {+1 , 0 , 0 , -1};
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            int i = it[0];
            int j = it[1];
            
        }
        if(ans == 1e9)
            return -1;
        return ans;
        
    }
    
    
};
