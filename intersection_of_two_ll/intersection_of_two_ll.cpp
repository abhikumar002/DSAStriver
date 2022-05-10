/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*P1=headA;
        ListNode*P2=headB;
        
        while(P1!=NULL || P2!=NULL){
            if(P1==NULL) P1=headB;
            if(P2==NULL) P2=headA;
            if(P1==P2) return P1;
            P1=P1->next;
            P2=P2->next;
        }
        return NULL;
    }
};