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
    ListNode* reverse(ListNode* node){
          ListNode* curr=NULL;
          
          while(node){
              ListNode* temp=node;
              node=node->next;
              temp->next=curr;
              curr=temp;
          }
        return curr;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next) return 1;
        ListNode* curr=head;
        ListNode* fast=head;
        ListNode* slow=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){
            if(slow->val!=curr->val) return 0;
            slow=slow->next;
            curr=curr->next;
        }
        return 1;
    }
};