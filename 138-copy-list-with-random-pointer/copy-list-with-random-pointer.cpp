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
        if(head==NULL){
            return NULL;
        }
        Node *head2=NULL;
        Node*temp=head;
        
        vector<Node*>map;
        vector<Node*>org;
        while(temp!=NULL){
            org.push_back(temp);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            Node*n=new Node(temp->val);
            map.push_back(n);
            temp=temp->next;
        }
        for(int i=0;i<map.size();i++){
            if(head2==NULL){
                head2=map[i];
            }
            if(i!=map.size()-1)map[i]->next=map[i+1];
            if(org[i]->random!=NULL){
                auto it=find(org.begin(),org.end(),org[i]->random);
                map[i]->random=map[distance(org.begin(),it)];
            }
        }
        if(head2==NULL){
            head2=map[org.size()-1];
        }
        
        return head2;
        
    }
};