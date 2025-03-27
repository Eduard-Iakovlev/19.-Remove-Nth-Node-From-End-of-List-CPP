#include "Solution.h"

ListNode* Solution::removeNthFromEnd(ListNode* head, int n){
    ListNode* curr = head;
    ListNode* prev = NULL, * next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

    curr = head;
    prev = NULL;
    for (int i = 1; i < n; ++i) {
        prev = curr;
        curr = curr->next;
    }
    if (curr->next != nullptr) {
        curr->val = curr->next->val;
        curr->next = curr->next->next;
    }
    else if (curr == head) return{};
    else {
        curr = NULL;
        prev->next = nullptr;
    }

    if (head == NULL) return {};

    curr = head;
    prev = NULL;
    next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

    return head;
}
