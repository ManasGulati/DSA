/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node*temp=head;
        Node*head2=NULL;
        Node*temp2;

        unordered_map<Node*,Node*>map;
        
        while(temp!=NULL){
            Node*n=new Node(temp->val);
            map[temp]=n;
            if(head2==NULL){
                head2=n;
                temp2=head2;
                temp=temp->next;
                continue;
            }
            
            temp2->next=n;
            temp2=temp2->next;
            temp=temp->next;
   
        }
        temp=head;
        temp2=head2;
        while(temp!=NULL){
            if(temp->random!=NULL){
                temp2->random=map[temp->random];
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        return head2;
        
    }
};