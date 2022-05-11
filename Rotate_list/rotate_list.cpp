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
    int sum(ListNode* head)
    {
        int count=0;
         while(head!=NULL)
        {
            head=head->next;
            count++;
        }
        return count;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
    
        int count=sum(head);
        int loop=(k%count);
            loop=count-loop;
      
        if(count==1 || count==loop) return head;
        
        int j=0;
        ListNode* root=head;
        ListNode* curr=head;
        
        while(root!=NULL)
        {
            j++;
            if(j==loop)
            {
                curr=root->next;
                root->next=NULL;
                break;
            }
            root=root->next;
        }
        
        root=curr;
        
        while(root->next!=NULL) root=root->next;
  
        root->next=head;
        return curr;
    }
};