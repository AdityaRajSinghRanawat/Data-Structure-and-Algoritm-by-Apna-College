#include <iostream>
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

// stores linked-list
class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    // O(1)
    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic object
        /*
            Node newNode(val); // static object
        */

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            /*
                (*newNode).next = head // dereference way
            */
            newNode->next = head;
            head = newNode;
        }
    }

    // with tail = O(1)
    // without tail = O(n)
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // O(1)
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL; // seperated both ll and single node (to be deleted)
        delete temp;
    }

    // O(n)
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "LL is empty" << endl;
            return;
        }

        Node *temp = head;
        // while(temp->next != tail) // another way
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // O(n)
    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        else if (pos == 0)
        {
            push_front(val);
            return;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                if (temp == NULL)
                {
                    cout << "Invalid position" << endl;
                    return;
                }
                temp = temp->next;
            }
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // O(n)
    int search(int val)
    {
        Node *temp = head;
        int i = 0;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                return i;
            }
            temp = temp->next;
            i++;
        }

        return -1;
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{

    List ll;

    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);

    ll.push_back(40);
    ll.push_back(50);
    ll.push_back(60);

    ll.pop_front();
    ll.pop_back();

    ll.insert(70, 2);
    ll.insert(80, 0);

    ll.print();

    cout << ll.search(80) << endl;
    cout << ll.search(50) << endl;

    return 0;
}