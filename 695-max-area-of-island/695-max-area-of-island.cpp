class Solution {
public:
    int area(int r,int c,vector<vector<bool>> &visited,vector<vector<int>>& grid)
    {
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || visited[r][c]==true || grid[r][c]==0 )
        {
            return 0;
        }
        visited[r][c]=true;
         return (1 + area(r+1, c,visited,grid) + area(r-1, c,visited,grid)+ area(r, c-1,visited,grid) + area(r, c+1,visited,grid));
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        vector<vector<bool>> visited(r,vector<bool>(c,false));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                // int temp=area(r,c,visited,grid);
                // cout<<i<<" "<<j<<" "<<temp<<endl;
                ans=max(ans,area(i,j,visited,grid));
            }
        }
        return ans;
        
        
    }
};