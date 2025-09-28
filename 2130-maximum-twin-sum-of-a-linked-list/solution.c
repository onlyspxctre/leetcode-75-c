#include "solution.h"
#include <stdio.h>

inline struct ListNode* reverseList(struct ListNode* head) {
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

int pairSum(struct ListNode* head) {
    if (!head || !head->next) return 0;

    struct ListNode* fast = head->next->next;
    struct ListNode* slow = head;

    int sum = 0;

    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }

    slow = reverseList(slow->next);

    while (slow) {
        int new_sum = slow->val + head->val;
        sum = new_sum > sum ? new_sum : sum;

        slow = slow->next;
        head = head->next;
    }

    return sum;
}
