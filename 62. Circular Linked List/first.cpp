#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CicularList
{
    Node *head;
    Node *tail;

public:
    CicularList()
    {
        head = tail = NULL;
    }

    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            // or
            // if(tail == NULL)
            head = tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
            // or if head is not given
            // newNode->next = tail->next;
            // tail->next = newNode;
        }
    }

    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = tail->next; // or head
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            cout << "CLL is empty" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            if (head == tail)
            {
                head = tail = NULL;
                delete temp;

                // or
                // delete head;
                // head = tail = NULL;
            }
            else
            {
                head = head->next;
                tail->next = head;
                temp->next = NULL;
                delete temp;
            }
        }
    }

    void deleteAtTail()
    {
        if (head == NULL)
        {
            cout << "CLL is empty" << endl;
            return;
        }
        else
        {
            Node *temp = tail;
            if (head == tail)
            {
                delete head;
                head = tail = NULL;
            }
            else
            {
                Node *prev = head;
                while (prev->next != tail)
                {
                    prev = prev->next;
                }
                tail = prev;
                tail->next = head;
                temp->next = NULL;
                delete temp;
            }
        }
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "NULL" << endl;
            return;
        }
        else
        {
            Node *temp = head;

            do
            {
                cout << temp->data << endl;
                temp = temp->next;
            } while (temp != head);
        }
    }
};

int main()
{
    CicularList cll;

    cll.insertAtHead(1);
    cll.insertAtHead(2);

    cll.insertAtTail(3);
    cll.insertAtTail(4);

    cll.deleteAtHead();

    cll.deleteAtTail();

    cll.print();

    return 0;
}