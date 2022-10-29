/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *d1=headA,*d2=headB;
        
        if(headA==NULL or headB==NULL)
        {return NULL;}
        
       while(d1!=d2)
       {
           d1=d1==NULL?headB:d1->next;
           d2=d2==NULL?headA:d2->next;
       }
        
        return d1;
    
        
        
    }
};