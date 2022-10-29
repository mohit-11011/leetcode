class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=1)
        {
            return n==1;
        }
        else
        {
            while(n>1)
            {
                if(n%2!=0)
                {
                    return false;
                }
                n=n/2;
            }
            if(n==1)
            return true;
            else
            {
                return false;
            }
        }
        return false;
    }
};