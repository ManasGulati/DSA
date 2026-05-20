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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans={-1,-1};
        int len=1;
        ListNode*temp=head;

        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }

        

        int idx=1;

        int prevEle=-1;

        int c1=-1;
        int c2=-1;

        temp=head;
        while(temp!=NULL){
            prevEle=temp->val;
            temp=temp->next;
            idx++;
            if(temp==head){
                continue;
            }else if(temp->next==NULL){
                break;
            }else{
                if((temp->val>prevEle && temp->val>(temp->next)->val)||(temp->val<prevEle && temp->val<(temp->next)->val)){
                    
                    if(c1==-1){
                        c1=idx;  
                        continue;
                    }else if(c2==-1){
                        c2=idx;  
                        ans[0]=c2-c1;
                        ans[1]=c2-c1;
                        continue;
                    }else{
                        ans[0]=min(ans[0],idx-c2);
                        ans[1]=max(ans[1],idx-c1);
                        c2=idx;  
                        continue;
                    }
                }
            }
        }
        
        
        return ans;
        
    }
};