class Solution {
public:
    int reverse(int x) {
        int num=abs(x);
        long long ans=0;
        while(num>0)
        {
            int temp=num%10;
            num=num/10;
            if(ans*10>INT_MAX)
               {
                   return 0;
               }
            ans=ans*10+temp;
        }
         return x>=0?ans:(-1*ans);
        
    }
};