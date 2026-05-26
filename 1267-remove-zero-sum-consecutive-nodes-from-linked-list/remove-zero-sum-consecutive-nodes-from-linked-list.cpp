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
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        unordered_map<int,ListNode*>m;
        ListNode*n=new ListNode(0);
        n->next=head;
        head=n;
        ListNode*temp=head;
        int pre=0;
        while(temp!=NULL){
            
            pre+=temp->val;
            
            
            if(m.find(pre)==m.end()){
                m[pre]=temp;
            }else{
                ListNode*trans=m[pre]->next;
                int k=pre;
                while(trans!=temp){
                    
                    k+=trans->val;
                    m.erase(k);
                    trans=trans->next;
                }
                m[pre]->next=temp->next;
            }
            temp=temp->next;
        }

        return head->next;
        
    }
};