#User function Template for python3
class Solution:
    def check(self, N, M, Edges): 
        #code here
        label=[0]*15
        n=N
        graph=[[] for i in range(N+1)]
        count=1
        for i in Edges:
            graph[i[0]].append(i[1])
            graph[i[1]].append(i[0])
        for i in range(1,n+1):
            if self.dfs(i,label,graph,count,n):
                return True
            label[i]=0
        return False
    def dfs(self,node,label,graph,count,n):
        label[node]=1
        if count==n:
            return True
        for i in graph[node]:
            if label[i]==0:
                if self.dfs(i,label,graph,count+1,n):
                    return True
                label[i]=0
        return False
        #code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        N,M = map(int,input().strip().split())
        Edges=[]
        e = list(map(int,input().strip().split()))
        for i in range(M):
            Edges.append([e[2*i],e[2*i+1]])
        ob = Solution()
        if ob.check(N, M, Edges):
            print(1)
        else:
            print(0)
# } Driver Code Ends