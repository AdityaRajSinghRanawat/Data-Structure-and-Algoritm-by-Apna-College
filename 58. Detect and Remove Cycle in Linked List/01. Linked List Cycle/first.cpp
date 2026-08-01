#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Problem: 141 [leetcode]
        Linked List Cycle II
    */

    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

    class Solution
    {
    public:
        ListNode *detectCycle(ListNode *head)
        {
            ListNode *fast = head;
            ListNode *slow = head;
            bool isCycle = false;

            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
                if (fast == slow)
                {
                    isCycle = true;
                    break;
                }
            }

            if (isCycle == true)
            {
                slow = head;
                ListNode *prev = fast;

                while (slow != fast)
                {
                    prev = fast;
                    slow = slow->next;
                    fast = fast->next;
                }

                prev->next = NULL; // remove cycle
                return slow;
            }
            else
            {
                return NULL;
            }
        }
    };
    
    return 0;
}