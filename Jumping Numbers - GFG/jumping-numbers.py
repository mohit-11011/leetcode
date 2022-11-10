#User function Template for python3

from collections import deque
class Solution:
    def bfs(self,X,num):
        q=deque()
        q.append(num)
        while q:
            num=q.popleft()
            if num<=X:
                self.ans=max(self.ans,num)
                last_dig=num%10
                if last_dig!=9:
                    q.append((num*10)+(last_dig+1))
                if last_dig!=0:
                    q.append((num*10)+(last_dig-1))
        
    def jumpingNums(self, X):
        self.ans=0
        for i in range(1,10):
            if i<=X:
                self.bfs(X,i)
        return self.ans
        # code here 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        X=int(input())
        
        ob = Solution()
        print(ob.jumpingNums(X))
# } Driver Code Ends