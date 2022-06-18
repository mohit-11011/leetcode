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
    void print(ListNode * head)
    {
        ListNode* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void insert(ListNode* &head,ListNode* &tail,int valu){
        ListNode* temp=new ListNode(valu);
        if(head==NULL)
        {
             
            //temp->val=valu;
            head=temp;
            tail=temp;
            return;
            
        }
        //ListNode* temp=new ListNode;
        //temp->val=valu;
        tail->next=temp;
        tail=temp;
        return;
        
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* head=new ListNode;
        ListNode* tail=head;
        /*insert(head,tail,1);
        insert(head,tail,2);
        insert(head,tail,3);
        print(head);*/
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<temp2->val)
            {
                insert(head,tail,temp1->val);
                temp1=temp1->next;
            }
            else
            {
                insert(head,tail,temp2->val);
                temp2=temp2->next;
            }            
        }
        while(temp1!=NULL)
        {
             ListNode* temp=new ListNode;
            
                insert(head,tail,temp1->val);
                temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
                insert(head,tail,temp2->val);
                temp2=temp2->next;
        }
        return head->next;
    }
};