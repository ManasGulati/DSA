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
    void solve(ListNode*&head,ListNode*&tail,int k){
        //base case
        if(k==0){
            return;
        }

        //recursion
        ListNode*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail->next=head;
        head=tail;
        tail=temp;
        solve(head,tail,k-1);

    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp=head;
        if(head==NULL||head->next==NULL){
            return head;
        }
        int len=1;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        if(k>len)k=k%len;
        solve(head,temp,k);
        return head;
        
    }
};