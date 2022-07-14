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
    void insert(ListNode* &head, ListNode* &tail,int val)
    {
        ListNode* node=new ListNode(val);
        if(head==NULL)
        {
            head=node;
            tail=node;
            return;
            
        }
        else
        {
            tail->next=node;
            tail=node;
            return;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head=NULL;
        ListNode* tail=NULL;
        while(l1!=nullptr && l2!=nullptr)
        {
            int temp=l1->val+l2->val+carry;
            carry=temp/10;
            temp=temp%10;
            insert(head,tail,temp);
            l1=l1->next;
            l2=l2->next;
            
        }
         while(l1!=nullptr)
        {
            int temp=l1->val+carry;
            carry=temp/10;
            temp=temp%10;
            insert(head,tail,temp);
            l1=l1->next;
           
            
        }
         while(l2!=nullptr)
        {
            int temp=l2->val+carry;
            carry=temp/10;
            temp=temp%10;
            insert(head,tail,temp);
            l2=l2->next;
           
            
        }
        if(carry!=0)
        {
            insert(head,tail,carry);
        }
        return head;
        
        
    }
};