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
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
            return head;
        
        ListNode* prev = head;
        head = head->next;
        ListNode* next = head->next;
        prev->next = NULL;
        while (next != NULL) {
            head->next = prev;
            prev = head;
            head = next;
            next = next->next;
        }
        head->next = prev;
        return head;
    }
};
