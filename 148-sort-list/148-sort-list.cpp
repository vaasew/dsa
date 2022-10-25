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
    ListNode* merge(ListNode* left,ListNode*right)
    {
     if(left==NULL)
     {
         return right;
     }
        if(right==NULL)
     {
         return left;
     }
        ListNode*ans=new ListNode(-1);
        ListNode*temp=ans;
        
        while(left!=NULL and right!=NULL)
        {
            if(left->val<right->val)
            {
                temp->next=left;
              
                left=left->next;
            }
            else
            {
                temp->next=right;
                
                right=right->next;
            }
            temp=temp->next;
        }
        while(right)
        {
            temp->next=right;
            right=right->next;
            temp=temp->next;
        }
           while(left)
        {
            temp->next=left;
            
            left=left->next;
               temp=temp->next;
        }
        return ans->next;
        
    }
      ListNode* midPre(ListNode* head) 
      {
        ListNode *slow = head, *fast = head,*temp;
while(fast !=  NULL && fast -> next != NULL)
        {
            temp = slow;
            slow = slow->next;          
            fast = fast ->next ->next;  
            
        }   
     return temp;
    }
    
    ListNode* mergeSort(ListNode*head)
    {
        
        if(head==NULL or head->next==NULL){
            return head;
        }
        
        ListNode* midP=midPre(head);
        ListNode* left=head;
        ListNode* right=midP->next;
        midP->next=NULL;
        
        left =mergeSort(left);
        right=mergeSort(right);
        
        ListNode* res=  merge(left,right);
        return res;
    }
    
    
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};