class Solution {
public:
    static bool cmp(pair<int,int> &a,pair<int,int> &b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        else
        {
            return a.second<b.second;
        }
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> soldiers;
        for(int i=0;i<mat.size();i++)
        {
            int sum=0;
            for(int j=0;j<mat[i].size();j++)
            {
                sum+=mat[i][j];
            }
            
            soldiers.push_back(make_pair(i,sum));
        }
            sort(soldiers.begin(),soldiers.end(),cmp);
            vector<int> ans;
            for(int i=0;i<soldiers.size() &&i<k;i++)
            {
                ans.push_back(soldiers[i].first);
            }
            return ans;
        }
    
};