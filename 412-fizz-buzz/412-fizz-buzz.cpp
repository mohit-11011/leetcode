class Solution {
public:
    string fun(int n)
    {
        if(n%3==0 && n%5==0)
        {
            return "FizzBuzz";
        }
        if(n%3==0)
            return "Fizz";
        if(n%5==0)
            return "Buzz";
        return to_string(n);
    }
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=fun(i+1);
        }
        return ans;
    }
};