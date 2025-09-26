#include "solution.h"
#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if (!head || !head->next) return NULL;

    struct ListNode* hare = head->next->next;
    struct ListNode* tortoise = head;

    while (hare && hare->next) {
        hare = hare->next->next;
        if (tortoise) tortoise = tortoise->next;
    }

    if (tortoise) {
        tortoise->next = tortoise->next->next;
    }

    return head;
}
