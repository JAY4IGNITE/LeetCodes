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
        vector<int> a;
        ListNode* temp;
        temp = head;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        for(int i=a.size()-1;i>=0;i--){
            temp->val = a[i];
            temp = temp->next;
        }
        return head;
    }
};