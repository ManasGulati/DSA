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
        
        int bal=0;
        ListNode*temp=head->next;
        ListNode*head2=NULL;
        ListNode*temp2=head2;
        while(temp!=NULL){
            if(temp->val==0){
                ListNode*n=new ListNode(bal);
                if(head2==NULL){
                    head2=n;
                    temp2=head2;
                }else{
                    temp2->next=n;
                    temp2=n;
                }
                bal=0;
                temp=temp->next;
            }else{
                bal+=temp->val;
                temp=temp->next;
            }
        }
        return head2;
        
    }
};