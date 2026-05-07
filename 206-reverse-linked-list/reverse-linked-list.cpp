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
    ListNode* reverseList(ListNode* head) {
        ListNode *next=NULL;
        ListNode *temp=head;
        ListNode * pre;
        if(temp!=NULL){
            pre=temp->next;
        }else{
            pre=NULL;
        }

        while(temp!=NULL){
            temp->next=next;
            next=temp;
            temp=pre;
            if(pre!=NULL){
                pre=pre->next;

            }
            
        }
        head=next;
        return head;

        
    }
};