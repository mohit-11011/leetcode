#User function Template for python3

class Solution:
    def satisfyEqn(self, A, N):
        # code here 
        Hash={}
        Ans=[]
        flag=0
        for i in range(N):
            for j in range(i+1,N):
                sum=A[i]+A[j]
                if sum not in Hash:
                    Hash[sum]=(i,j)
                else:
                    pp=Hash[sum]
                    if pp[0]!=i and pp[0]!=j and pp[1]!=i and pp[1]!=j:
                        ans=[]
                        ans.append(pp[0])
                        ans.append(pp[1])
                        ans.append(i)
                        ans.append(j)
                        if not Ans:
                            Ans=ans[:]
                        else:
                            shouldReplace=False
                            for i1 in range(len(Ans)):
                                if Ans[i1]<ans[i1]:
                                    break
                                if Ans[i1]>ans[i1]:
                                    shouldReplace=True
                                    break
                            if shouldReplace:
                                Ans=ans
        if not Ans:
            return [-1,-1,-1,-1]
        return Ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        A=list(map(int,input().split()))
        
        ob = Solution()
        ptr=ob.satisfyEqn(A,N)
        print(*ptr)
# } Driver Code Ends