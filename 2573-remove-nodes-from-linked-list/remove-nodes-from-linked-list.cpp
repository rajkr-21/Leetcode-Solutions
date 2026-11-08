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
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        if (!head || !head->next) return head;

        head = reverseList(head);

        ListNode* curr = head;
        int maxVal = curr->val;

        while (curr && curr->next) {
            if (curr->next->val < maxVal) {
                // Skip the next node because a greater value exists to its right
                curr->next = curr->next->next;
            } else {
                // Update the maximum value and move forward
                maxVal = curr->next->val;
                curr = curr->next;
            }
        }
        return reverseList(head);
    }
};
