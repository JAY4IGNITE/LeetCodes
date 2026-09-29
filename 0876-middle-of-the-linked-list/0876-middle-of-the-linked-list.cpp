class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // int len = 0;
        // ListNode* temp = head;
        // while (temp != NULL) {
        //     len++;
        //     temp = temp->next;
        // }
        // int mid = len / 2;
        // temp = head;
        // while (mid > 0) {
        //     temp = temp->next;
        //     mid--;
        // }
        // return temp;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL&&fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};