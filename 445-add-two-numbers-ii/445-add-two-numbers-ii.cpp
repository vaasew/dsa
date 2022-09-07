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
   ListNode* reverse(ListNode* head){
//CODE HERE 
 
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *temp;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            
            
        }
        head=prev;
        
        return head;
}
void insertAtTail(ListNode* &head,ListNode* &tail,int val)
{
    
    ListNode*temp =new ListNode(val);
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else{
    tail->next=temp;
    tail=tail->next;
    }
}
ListNode* sum(ListNode* l1, ListNode* l2){
//CODE HERE
int carry =0;int num;
ListNode *anshead=NULL;
ListNode *anstail=NULL;

int sum=0;
 while(l1!=NULL and l2!=NULL)
 {
     sum=l1->val+l2->val+carry;
     num=sum%10;
     carry=sum/10;
     insertAtTail(anshead,anstail,num);
     l1=l1->next;
     l2=l2->next;
 }
 if(l1==NULL and l2!=NULL)
 {
     while(l2!=NULL)
     {
    sum=l2->val+carry;
     num=sum%10;
     carry=sum/10;
     insertAtTail(anshead,anstail,num);
     l2=l2->next;
     }
 }
 else if(l2==NULL and l1!=NULL)
 {
     while(l1!=NULL)
     {
    sum=l1->val+carry;
     num=sum%10;
     carry=sum/10;
   insertAtTail(anshead,anstail,num);
     l1=l1->next;
     }
 }
if(carry>0)
{
     insertAtTail(anshead,anstail,carry);
}
 return anshead;
}
    
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
//CODE HERE
ListNode* tail1;
ListNode* tail2; 
tail1=reverse(l1);
tail2=reverse(l2);
ListNode* ans=sum(tail1,tail2);
    
return reverse(ans);
}
};