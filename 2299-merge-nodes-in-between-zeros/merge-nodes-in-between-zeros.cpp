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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode*n=new ListNode(0);
        ListNode*temp=head->next;
        ListNode*head2=n;
        ListNode*temp2=n;
        while(temp->next!=NULL){
            if(temp->val==0){
                ListNode*n=new ListNode(0);
                
                temp2->next=n;
                temp2=n;
                temp=temp->next;
            }else{
                temp2->val+=temp->val;
                temp=temp->next;
            }
        }
        return head2;
        
    }
};