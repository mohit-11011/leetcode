/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void reverse()
{
    
}
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,bool> m;
        ListNode* temp=headA;
        while(temp!=NULL)
        {
            m[temp]=true;
            temp=temp->next;
        }
        temp=headB;
        ListNode* ans=NULL;
        while(temp!=NULL)
        {
            if(m[temp]==true)
            {
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
};
