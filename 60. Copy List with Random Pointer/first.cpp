#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        Problem: 138 [leetcode]
        Copy List with Random Pointer
    */

    class Node
    {
    public:
        int val;
        Node *next;
        Node *random;

        Node(int _val)
        {
            val = _val;
            next = NULL;
            random = NULL;
        }
    };

    class Solution
    {
    public:
        Node *copyRandomList(Node *head)
        {
            if (head == NULL)
            {
                return NULL;
            }

            // make copy liked list's head node
            Node *copyHeadNode = new Node(head->val);
            // temp act as connection builder between copy nodes
            // point the temp pointer to copyHead node
            Node *newTemp = copyHeadNode;
            // make a pointer, pointing to the next node of old ll
            Node *oldTemp = head->next;

            // save the old and new ll node's addresses
            // oldNode Addr, newNode Addr
            unordered_map<Node *, Node *> m;
            m[head] = copyHeadNode;

            while (oldTemp != NULL)
            {
                // make a new node for copy
                Node *copyNode = new Node(oldTemp->val);
                // save this new node as old node addr
                m[oldTemp] = copyNode;
                // connect the copy link list nodes
                newTemp->next = copyNode;
                // update the oldTemp and newTemp to next node
                oldTemp = oldTemp->next;
                newTemp = newTemp->next;
            }

            oldTemp = head;
            newTemp = copyHeadNode;

            while (oldTemp != NULL)
            {
                newTemp->random = m[oldTemp->random];
                oldTemp = oldTemp->next;
                newTemp = newTemp->next;
            }

            return copyHeadNode;
        }
    };

    return 0;
}