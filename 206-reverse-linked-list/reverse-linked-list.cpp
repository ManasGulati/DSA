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
    void solve(ListNode *&next, ListNode *&temp, ListNode * &pre,ListNode* &head){
        //base case
        if(temp==NULL){
            head=next;
            return;
        }

        //recursion call
        temp->next=next;
        ListNode *pre2;
        if(pre!=NULL){
            pre2=pre->next;
        }else{
            pre2=NULL;
        }
        solve(temp,pre,pre2,head);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *next=NULL;
        ListNode *temp=head;
        ListNode * pre;
        if(temp!=NULL){
            pre=temp->next;
        }else{
            pre=NULL;
        }
        solve(next,temp,pre,head);

        return head;

        
    }
};