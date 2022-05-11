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
        
        Node* iter=head;
        Node* front=head;
        
        // 1 step
        while(iter!=NULL){
            front=iter->next;
            
            Node *copy=new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            
            iter=front;
        }
         
        //2 step
        iter=head;
        
        while(iter!=NULL){
            if(iter->random!=NULL) iter->next->random = iter->random->next;
            
            iter=iter->next->next;
        }
        
        //3 Step
        iter=head;
        Node* psedohead=new Node(0);
        Node* copy=psedohead;
        
        while(iter!=NULL){
            front=iter->next->next;
            
            //extract the copy
            copy->next=iter->next;
            
            //restore the original
            iter->next=front;
            
            copy=copy->next;
            iter=front;
        }
        
        return psedohead->next;
    }
};