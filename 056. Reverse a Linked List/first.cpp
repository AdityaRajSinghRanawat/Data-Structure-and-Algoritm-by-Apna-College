#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Problem: 206 [leetcode]
        Reverse Linked List
    */

    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    class Solution
    {
    public:
        ListNode *reverseList(ListNode *head)
        {
            ListNode *next = NULL;
            ListNode *prev = NULL;
            ListNode *curr = head;

            // O(n)
            while (curr != NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }

            return prev;
        }
    };

    return 0;
}