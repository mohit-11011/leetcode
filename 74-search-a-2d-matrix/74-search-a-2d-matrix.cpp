class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=row*col-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            int rowtemp=mid/col;
            int coltemp=mid%col;
           // cout<<matrix[rowtemp][coltemp]<<" ";
            if(matrix[rowtemp][coltemp]==target)
            {
                return true;
                
            }
            else if(matrix[rowtemp][coltemp]>target)
            {
                j=mid-1;
                
            }
            else
            {
                i=mid+1;
            }
        }
        return false;
    }
};