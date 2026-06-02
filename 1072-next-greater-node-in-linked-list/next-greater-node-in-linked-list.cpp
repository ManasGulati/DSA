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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>l;
        while(head!=NULL){
            l.push_back(head->val);
            head=head->next;
        }
        stack<int>s;
        vector<int>ans(l.size());
        int count=l.size()-2;
        s.push(l[l.size()-1]);
        ans[l.size()-1]=0;
        
        while(count>=0){

            if(!s.empty()&&l[count]<s.top()){
                ans[count]=s.top();
                s.push(l[count]);
                count--;

            }else{
                while(!s.empty()&&l[count]>=s.top()){
                    s.pop();
                }
                s.empty()?ans[count]=0:ans[count]=s.top();
                s.push(l[count]);
                count--;

            }
            
        }
        return ans;
    }
};