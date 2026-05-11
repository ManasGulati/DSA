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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head=NULL;
        ListNode*temp=NULL;
        int carry=0;
        while(l1!=NULL||l2!=NULL){
            int val=0;
            
            if(l1!=NULL&&l2!=NULL){
                val=carry+(l1->val+l2->val);
                int dig=val%10;
                carry=val/10;
                ListNode* n=new ListNode(dig);
                if(head==NULL){
                    head=n;
                    temp=head;
                    l1=l1->next;
                    l2=l2->next;
                    continue;
                }
                temp->next=n;
                temp=temp->next;
                l1=l1->next;
                l2=l2->next;
            }else if(l1==NULL&&l2!=NULL){
                val=carry+(l2->val);
                int dig=val%10;
                carry=val/10;
                ListNode* n=new ListNode(dig);
                if(head==NULL){
                    head=n;
                    temp=head;
                    l2=l2->next;
                    continue;
                }
                temp->next=n;
                temp=temp->next;
                l2=l2->next;

            }else{
                val=carry+(l1->val);
                int dig=val%10;
                carry=val/10;
                ListNode* n=new ListNode(dig);
                if(head==NULL){
                    head=n;
                    temp=head;
                    l1=l1->next;
                    continue;
                }
                temp->next=n;
                temp=temp->next;
                l1=l1->next;

            }
        }
        if(carry!=0){
            ListNode* n=new ListNode(carry);
            temp->next=n;

        }
        return head;
        
    }
};