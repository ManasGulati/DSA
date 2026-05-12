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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*t1=headA;

        ListNode*t2=headB;
        
        ListNode*ans=NULL;
        unordered_set<ListNode*> s;
        while(t1!=NULL){
            s.insert(t1);
            t1=t1->next;
        }
        while(t2!=NULL){
            if(s.count(t2)){
                ans=t2;
                break;
            }
            t2=t2->next;
        }
        return ans;
    }
};