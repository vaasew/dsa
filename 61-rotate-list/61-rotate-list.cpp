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
    ListNode* rotateRight(ListNode* head, int k) {
    
        if(!head or !head->next or k==0)
            return head;
        
        int n=1;
        
        ListNode *curr=head;
        while(curr->next)
        {
            n++;
            curr=curr->next;
        }
        
        k=k%n;
        if(k==0)
        {
            return head;
        }
        
        curr->next=head;
        k=n-k;
        while(k--)
        {
            curr=curr->next;
        }
        head=curr->next;
        curr->next=NULL;
        
        return head;
        
    }
};