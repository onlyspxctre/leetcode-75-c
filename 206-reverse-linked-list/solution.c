#include "solution.h"
#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (!head) return head;

    struct ListNode* curr = head->next;
    if (!curr) return head;

    head->next = NULL;

    while (1) {
        struct ListNode* next = curr->next;

        curr->next = head;
        head = curr;

        if (!next) break;
        curr = next;
    }

    return curr;
}
