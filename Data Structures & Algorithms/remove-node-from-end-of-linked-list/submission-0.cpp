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
    
       ListNode * current = head ;
       ListNode * prev = NULL;
       while ( current!=NULL){
        ListNode * temp = current->next ;
        current->next = prev;
        prev = current ;
        current = temp;
       }
        if (n==1){
            prev = prev->next;
        }
        else {
            ListNode * temp = prev;
            for ( int i = 1;i<n-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next ;
        }
        current = prev ;
        ListNode * prev1 = NULL;
        while ( current!=NULL){
        ListNode * temp = current->next ;
        current->next = prev1;
        prev1 = current ;
        current = temp;
       }
        return prev1;


     
    }
    
};
