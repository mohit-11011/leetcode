class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if (i==j || i+j+1==grid.size())
                {
                    if(grid[i][j]==0)
                        return false;
                }
                else
                {
                     if(grid[i][j]!=0)
                        return false;
                }
            }
        }
        return true;
    }
};