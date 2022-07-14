class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,bool> isthere;
        for(auto i:nums)
        {
            if(i>0)
            {
                isthere[i]=true;
            }
        }
        int count=1;
        for(auto i:isthere)
        {
            cout<<i.first<<" ";
        }
        cout<<endl;
        for(auto i:isthere)
        {
            if(i.first!=count)
            {
                return count;
            }
            else
            {
                count++;
            }
        }
        
        return isthere.size()+1;
        
    }
};