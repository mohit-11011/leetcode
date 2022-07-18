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
#define Node ListNode
#define data val
class Solution {
public:
    private:
    Node* getMid(Node* head ) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast-> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    
    int pairSum(ListNode* head) {
        int ans=0;
        Node* middle = getMid(head);
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        Node* head1 = head;
        Node* head2 = middle -> next;
        while(head1!=NULL && head2!=NULL)
        {
            int temp=head1->val+head2->val;
            ans=max(ans,temp);
            head1=head1->next;
            head2=head2->next;
            
                
        }
        return ans;
    }
};