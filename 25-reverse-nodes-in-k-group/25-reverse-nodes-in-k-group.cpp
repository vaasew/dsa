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
    ListNode* reverseKGroup(ListNode* head, int k) {
       
        if(head==NULL or k==1)return head;
    
        ListNode* dum=new ListNode(0);
        dum->next=head;
        ListNode*cur=dum,*nex=dum,*pre=dum;
        int l=0;
        
        while(cur->next)
        {
            cur=cur->next;
            l++;
        }
        
        while(l>=k)
        {
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre=cur;
            l=l-k;
        }
        return  dum->next;
    }
};