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

        //trying to get 0 ms by repeated submission

        if(head==NULL){
            return false;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)fast=fast->next;
            if(fast==slow&&fast!=NULL){
                return true;
            }
        }

        return false; 

    }
};