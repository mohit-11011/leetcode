class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
            return -1;
        if(needle==haystack)
            return 0;
        int ans=-1;
        for(int i=0;i<haystack.size();i++)
        {
            int temp=i;
            for(int j=0;j<needle.size();j++)
            {
                
                cout<<"i "<<i<<" j "<<j<<"      "<<haystack[temp]<<" "<<needle[j]<<endl;
                if (haystack[temp]!=needle[j])
                {
                    break;
                }
                if(j==needle.size()-1)
                {
                    return i;
                }
                temp++;
            }
        }
        return -1;
    }
};