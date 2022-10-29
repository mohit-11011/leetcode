#User function Template for python3

class trieNode:
    def __init__(self):
        self.child=[None]*(26)
        self.isLast=False
        
class Trie:
    def __init__(self):
        self.root=trieNode()
    def insert(self,a):
        curr=self.root
        for el in a:
            if curr.child[ord(el)-ord("a")]==None:
                curr.child[ord(el)-ord("a")]=trieNode()
            curr=curr.child[ord(el)-ord("a")]
        curr.isLast=True
    def insertIntoTrie(self,contact,n):
        for i in range(n):
            self.insert(contact[i])
class Solution:
    def displayContactsUtil(self,curNode,prefix,vec):
        if curNode.isLast:
            vec.append(prefix)
        for c in range(26):
            i=chr(ord("a")+c)
            nextNode=curNode.child[c]
            if nextNode!=None:
                self.displayContactsUtil(nextNode,prefix+i,vec)
        
            
    def displayContacts(self, n, contact, s):
        trie=Trie()
        trie.insertIntoTrie(contact,n)
        prevnode=trie.root
        res=[]
        prefix=""
        _len=len(s)
        i=0
        while i<_len:
            v=[]
            prefix+=s[i]
            last_char=prefix[i]
            curNode=prevnode.child[ord(last_char)-ord("a")]
            if curNode is None:
                v.append("0")
                res.append("0")
                i+=1
                break
            else:
                self.displayContactsUtil(curNode,prefix,v)
                prevnode=curNode
                res.append(v[:])
                i+=1
                
        while i<_len:
            res.append(["0"])
            i+=1
        return res
        # code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        contact = input().split()
        s = input()
        
        ob = Solution()
        ans = ob.displayContacts(n, contact, s)
        for i in range(len(s)):
            for val in ans[i]:
                print(val, end = " ")
            print()
# } Driver Code Ends