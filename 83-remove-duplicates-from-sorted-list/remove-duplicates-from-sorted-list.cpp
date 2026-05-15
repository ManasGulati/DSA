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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int>s;
        ListNode*temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            if(s.find(temp->val)!=s.end()){
                prev->next=temp->next;
                temp->next=NULL;
                temp=prev->next;
            }else{
                prev=temp;
                s.insert(temp->val);
                temp=temp->next;
            }

        }
        return head;
        
    }
};