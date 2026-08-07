#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Problem: 876 [leetcode]
        Middle of the Linked List
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
        ListNode *middleNode(ListNode *head)
        {
            ListNode *slow = head; // +1
            ListNode *fast = head; // +2

            while (fast != NULL && fast->next != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }

            return slow;
        }
    };

    return 0;
}