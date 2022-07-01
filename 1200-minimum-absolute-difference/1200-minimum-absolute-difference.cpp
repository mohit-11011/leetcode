class Solution {
public:
    static bool cmp2(vector<int> &a,vector<int> &b)
    {
        return a[0]<b[0];
    }
    static bool cmp(pair<int,pair<int,int>> &a,pair<int,pair<int,int>> &b)
    {
        return a.first<b.first;
    }
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       sort(arr.begin(),arr.end());
        vector<pair<int,pair<int,int>>> diff;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            diff.push_back(make_pair(abs(arr[i]-arr[i+1]),make_pair(arr[i],arr[i+1])));            
        }
        sort(diff.begin(),diff.end(),cmp);
        for(auto i:diff)
        {
            cout<<"diff "<<i.first<<" elements "<<i.second.first<<","<<i.second.second<<endl;
        }
        int mindiff=diff[0].first;
        vector<vector<int>> ans;
        for(int i=0;i<diff.size();i++)
        {
            if(diff[i].first==mindiff)
            {
                vector<int> temp;
                temp.push_back(diff[i].second.first);
                temp.push_back(diff[i].second.second);
                ans.push_back(temp);
                temp.clear();
            }
        }
        sort(ans.begin(),ans.end(),cmp2);
        return ans;
    }
};