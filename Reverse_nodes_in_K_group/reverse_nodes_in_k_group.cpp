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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL) return head;
           ListNode* start=head;
        int count=0;
        while(start!=NULL){
            count++;
            start=start->next;
        }
        
        ListNode* newhead=new ListNode(NULL);
        newhead->next=head;
        
        ListNode* pre=newhead;
        ListNode* curr;
        ListNode* nex;
        
        while(count>=k){
            curr=pre->next; cout<<curr->val<<" ";
            nex=curr->next; cout<<nex->next->val<<" "<<endl;
            for(int i=1;i<k;i++){
                curr->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=curr->next; 
            }
           pre=curr;
            count-=k;
        }
        
        return newhead->next;
    }
};