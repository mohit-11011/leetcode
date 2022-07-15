class Solution {
public:
    int area(int r,int c,vector<vector<bool>> &visited,vector<vector<int>>& grid)
    {
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size() || grid[r][c]==0)
        {
            cout<<r<<" "<<c<<endl;
            return 1;
        }
        if(grid[r][c]==1 && visited[r][c])
        {
            return 0;
        }
        visited[r][c]=true;
        if(grid[r][c]==1  )
        {
            return ( area(r+1, c,visited,grid) + area(r-1, c,visited,grid)+ area(r, c-1,visited,grid) + area(r,     c+1,visited,grid));
            
        }
        return 0;
        
        
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<bool>> visited(r,vector<bool>(c,false));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                    return area(i,j,visited,grid);
            }
        }
        return 0;
    }
};