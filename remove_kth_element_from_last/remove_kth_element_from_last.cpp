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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
           ListNode* start=new ListNode();
           start->next=head;
           ListNode* fast=start;
           ListNode* slow=start;
        
           for(int i=1;i<=n;i++)
            fast=fast->next;
        
           while(fast->next){
               fast=fast->next;
               slow=slow->next;
           }
        
           slow->next=slow->next->next;
        
           return start->next;
        
        
//         ListNode* ans=head;
//         if(!head) return ans;
//         int count=0;
        
//         while(head){
//             head=head->next;
//             count++;
//         }
        
//         count=count-n;
//         head=ans;
        
//         while(head){
//             count--;
//             if(count<=0) if(head->next && head->next->next) head->next=head->next->next;
//             head=head->next;
//         }
        
//         return ans;
    }
};