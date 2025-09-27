#include "solution.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if (!head || !head->next) return head;

    struct ListNode* odd = head;
    struct ListNode* even = head->next;
    struct ListNode* const starting_even = head->next;

    while (odd) {
        odd->next = even->next;
        if (!odd->next) break;
        odd = odd->next;

        even->next = odd->next;
        if (!even->next) break;
        even = even->next;
    }

    odd->next = starting_even;

    return head;
}
