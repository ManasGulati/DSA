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

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        ListNode*slow=head;
        ListNode*fast=head;
        bool odd=false;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }else{
                odd=true;
                break;
            }
            slow=slow->next;
        }
        if(odd){
            
            fast=slow->next;
            fast=reverse(fast);
            slow=head;
            while(fast!=NULL){
                if(fast->val!=slow->val){
                    return false;
                }else{
                    slow=slow->next;
                    fast=fast->next;
                }
            }

        }else{
            fast=slow;
            fast=reverse(fast);
            slow=head;
            while(fast!=NULL){
                if(fast->val!=slow->val){
                    return false;
                }else{
                    slow=slow->next;
                    fast=fast->next;
                }
            }

        }
        return true;
        

        
    }
};