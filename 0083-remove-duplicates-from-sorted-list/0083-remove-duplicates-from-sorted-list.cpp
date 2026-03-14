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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* start=head;
        ListNode* second=head;
        while(second){
            if(start->val!=second->val){
                start->next=second;
                start=start->next;
            }
            second=second->next;
        }
        if(start){
           start->next=nullptr; 
        }
        
        return head;
    }
};