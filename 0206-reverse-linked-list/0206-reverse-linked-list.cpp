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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr;
        ListNode* prev;
        ListNode* nxt;
        curr = head;
        prev = nxt = NULL;
        //ListNode* next;
        while(curr!=NULL){
            nxt = curr->next;
            curr->next= prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
};