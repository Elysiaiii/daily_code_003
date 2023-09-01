#include <stdio.h>
#include <stdbool.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* left;

bool compare(struct ListNode* right)
{
    if (right != NULL)
    {
        if (!compare(right->next))
        {
            return false;
        }
        if (right->val != left->val)
        {
            return false;
        }
        left = left->next;
    }
    return true;
}

bool isPalindrome(struct ListNode* head)
{
    left = head;
    return compare(head);
}