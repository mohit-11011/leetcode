#define c 1000000007
class Solution {
public:
    int max_element(vector<int> v)
    {
        int ans=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
           ans=max(v[i],ans); 
        }
        return ans;
    }
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int horin=horizontalCuts.size();
        int verin=verticalCuts.size();
        vector<int> hori;
        hori.push_back(horizontalCuts[0]);
        hori.push_back(h-horizontalCuts[horin-1]);
        for(int i=0;i<horin-1;i++)
        {
            hori.push_back(horizontalCuts[i+1]-horizontalCuts[i]);
        }
        vector<int> veri;
        veri.push_back(verticalCuts[0]);
        veri.push_back(w-verticalCuts[verin-1]);
        for(int i=0;i<verin-1;i++)
        {
            veri.push_back(verticalCuts[i+1]-verticalCuts[i]);
        }
        long long int  ans;
        int a=max_element(hori);
        cout<<a%c<<endl;
        int b=max_element(veri);
        return (1LL*a*b) % 1000000007;
        
        
        
        
        
        
    }
};