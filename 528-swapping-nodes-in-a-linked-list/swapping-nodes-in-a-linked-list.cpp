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
    int len(ListNode*temp){
        int l=0;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL){
            return head;
        }
        ListNode*temp=head;
        int l=len(temp);
        ListNode*swap1=head;
        ListNode*p1=NULL;
        ListNode*swap2=head;
        ListNode*p2=NULL;
        int count=0;
        temp=head;
        while(temp!=NULL){
            count++;
            if(count==k-1){
                p1=temp;
                swap1=temp->next;
            }
            if(count==(l-k)){
                p2=temp;
                swap2=temp->next;
            }
            temp=temp->next;
        }

        ListNode*next=swap1->next;
        if(swap1->next==swap2){
            cout<<"ok";
            if(p1==NULL){
                head=swap2;
            }else{
                p1->next=swap2;
            }
            
            swap1->next=swap2->next;
            swap2->next=swap1;
            return head;

        }else if(swap2->next==swap1){
            cout<<"ok";
            if(p2==NULL){
                head=swap1;
            }else{
                p2->next=swap1;
            }
            
            swap2->next=swap1->next;
            swap1->next=swap2;
            return head;
        }
        if(p1==NULL){
            head=swap2;
            swap1->next=swap2->next;
            swap2->next=next;

            if(p2!=NULL)p2->next=swap1;
            
            return head;
        }else if(p2==NULL){
            head=swap1;
            next=swap2->next;
            swap2->next=swap1->next;
            swap1->next=next;

            if(p1!=NULL)p1->next=swap2;
            
            return head;
        }else{
            p1->next=swap2;
        }
        swap1->next=swap2->next;
        swap2->next=next;

        if(p2!=NULL)p2->next=swap1;
        
        return head;


    }
};