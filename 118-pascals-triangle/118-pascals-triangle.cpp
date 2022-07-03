class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);
        if(numRows==1)
            return ans;
        temp.push_back(1);
        ans.push_back(temp);
        if(numRows==2)
            return ans;
        
        
        
        
        temp.clear();
        for(auto i:ans)
        {
            for(auto j:i)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        for(int i=3;i<=numRows;i++)
        {
            temp.push_back(1);
            for(int j=0;j<i-2;j++)
            {
                temp.push_back(ans[i-2][j]+ans[i-2][j+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};