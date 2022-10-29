class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=3)
        {
            return n==1;
        }
        else
        {
            while(n>1)
            {
                if(n%4!=0)
                {
                    return false;
                }
                n=n/4;
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