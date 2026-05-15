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

    void solve(ListNode*&hd){
        
        ListNode*head=hd;
        
        while(head->next!=NULL){
            ListNode* next=head->next;
            if(next!=NULL&&head->val>next->val){
                head->next=next->next;
                next->next=NULL;
                continue;
            }
            if(head->next!=NULL)head=head->next;
        }
    }
    void reverse(ListNode*&head){
        ListNode*prev=NULL;
        ListNode*next=head->next;
        while(head->next!=NULL){
            head->next=prev;
            prev=head; 
            head=next;
            next=next->next;               
            
        }
        head->next=prev;
    }

    ListNode* removeNodes(ListNode* head) {
        reverse(head);

        solve(head);


        reverse(head);

        return head;
        
    }
};