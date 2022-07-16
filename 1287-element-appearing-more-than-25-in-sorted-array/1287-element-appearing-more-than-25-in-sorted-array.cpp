class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> f;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            f[arr[i]]++;
            if(f[arr[i]]>(n/4))
            {
                return arr[i];
            }
        }
        return -1;
    }
};