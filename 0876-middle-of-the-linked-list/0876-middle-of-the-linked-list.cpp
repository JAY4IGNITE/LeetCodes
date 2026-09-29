class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Find length
        int len = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            len++;
            temp = temp->next;
        }

        // Find middle position
        int mid = len / 2;

        // Move to middle node
        temp = head;

        while (mid > 0) {
            temp = temp->next;
            mid--;
        }

        return temp;
    }
};