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
    int len(ListNode* head){
        int l=0;
        ListNode*temp=head;

        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }

    ListNode*traversal(ListNode* head, int n){
        ListNode*temp=head;
        int node=1;
        while(node!=n){
            temp=temp->next;
            node++;
        }
        return temp;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=len(head);
        if(l==0){
            delete(head);
            head=NULL;
            return head;
        }
        int node=l-n;
        if(node==0){
            ListNode*temp=head;
            head=head->next;
            temp->next=NULL;
            delete(temp);
            return head;
        }

        ListNode*temp=traversal(head,node);
        
        ListNode*del=temp->next;

        temp->next=del->next;
        del->next=NULL;
        delete(del);
        return head;

        
    }
};