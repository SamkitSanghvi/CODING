// CH
// Circular Linked List

#include <bits/stdc++.h>
using namespace std;
class node
{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtStart(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtAny(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtStart(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void deleteAtStart(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    node *todelete = head;
    temp->next = head->next;
    head = head->next;

    delete todelete;
}

void deleteAtAny(node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtStart(head);
        return;
    }
    node *temp = head;
    int count = 1;

    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void display(node *head)
{

    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{

    node *head = NULL;
    insertAtStart(head, 1);
    insertAtStart(head, 2);
    insertAtStart(head, 3);
    insertAtStart(head, 4);
    display(head);
    insertAtAny(head, 5);
    display(head);
    deleteAtAny(head, 1);
    display(head);
}