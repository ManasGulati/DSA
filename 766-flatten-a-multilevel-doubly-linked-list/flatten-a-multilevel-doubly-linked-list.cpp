/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node*temp=head;

        while(temp!=NULL){
            if(temp->child==NULL){
                temp=temp->next;
                
            }else{
                Node*curr=temp->child;
                Node*resume=temp->next;
                while(curr->prev!=NULL){
                    curr=curr->prev;
                }
                curr->prev=temp;
                temp->next=curr;
                while(curr->next!=NULL){
                    curr=curr->next;
                }
                
                curr->next=resume;
                if(resume!=NULL)resume->prev=curr;
                
                temp->child=NULL;
                temp=temp->next;
            }
        }
        return head;
        
    }
};