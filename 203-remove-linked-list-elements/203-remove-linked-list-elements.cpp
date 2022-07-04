/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // if(head==NULL)
        //     return head;
        // if(head->next==NULL)
        // {
        //     if(head.val==val)
        //     {
        //         return NULL;
        //     }
        //     return head;
        // }
        
        
        
        
        ListNode* temp=new ListNode(-1);
        temp->next=head;
        head=temp;
        
        
        ListNode* counter=head->next;
        ListNode* prev=head;
        while(counter!=NULL)
        {
            if(counter->val==val)
            {
                if(counter->next!=NULL)
                {
                    prev->next=counter->next;
                    counter=counter->next;
                    continue;
                }
                else
                {
                    prev->next=NULL;
                }
                
            }
            prev=counter;
            counter=counter->next;
        }
        return head->next;
        
    }
};