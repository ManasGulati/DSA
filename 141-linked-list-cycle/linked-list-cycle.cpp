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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        if(head==NULL){
            return false;
        }
        while(fast!=NULL){
            if(slow!=NULL)slow=slow->next;
            if(fast!=NULL)fast=fast->next;
            if(fast!=NULL)fast=fast->next;
            if(fast==slow&&fast!=NULL){
                return true;
            }
        }
        return false;
        
    }
};