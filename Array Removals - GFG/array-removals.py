#User function Template for python3


class Solution:

	def removals(self,arr, n, k):
        arr.sort()
        self.dp=[[-1]*101 for _ in range(101)]
        if n==1:
            return 0
        else :
            return self.countRemovals(arr,0,n-1,k)
    def countRemovals(self,arr,i,j,k):
        if i>=j:
            return 0
        elif (arr[j]-arr[i])<=k:
            return 0
        elif self.dp[i][j]!=-1:
            return self.dp[i][j]
        elif arr[j]-arr[i]>k:
            self.dp[i][j]=1+min(self.countRemovals(arr,i+1,j,k),self.countRemovals(arr,i,j-1,k))
        return self.dp[i][j]
		# code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, k = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.removals(arr, n, k)
        print(ans)
        tc -= 1
# } Driver Code Ends