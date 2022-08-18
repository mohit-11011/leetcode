class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> x;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            x[arr[i]]++;
        }
        vector<int> temp;
        for(auto i:x)
        {
            temp.push_back(i.second);
        }
        sort(temp.begin(),temp.end(), greater<int>());
        int count=0;
        int size=n;
        while(size>(n/2))
        {
            size-=temp[count++];
            
        }
        return count;
    }
};