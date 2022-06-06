// CH
// Implementation of Singley Linked-List
// Node ---> contain data and Address of Next Node
// Insertion and Deletion At head
// Insertion and Deletion At last
// Insertion and Deletion At Middle

#include <bits/stdc++.h>
using namespace std;

// Node of the Linked-List
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is Free "<<value<<endl;
    }
};

// Size of the Linked list
int size(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

// Inserting a Node at the Beginning of the Linked-List
void insertAtStart(Node *&head, int data)
{
    
    Node *n1 = new Node(data);
    if(head == NULL){
        head = n1;
        return;
    }
    n1->next = head;
    head = n1;
}

// Inserting a Node at the End of the Linked-List
void insertAtEnd(Node *&tail, int data)
{
    Node *n1 = new Node(data);
    tail->next = n1;
    tail = tail->next;
}

// Inserting a Node at the Middle of the Linked-List
void insertAtMiddle(Node *&tail, Node *&head, int data, int index)
{
    if (index > size(head))
    {
        cout << "Not Enough Members" << endl;
        return;
    }
    else if (index == 0)
    {
        insertAtStart(head, data);
        return;
    }
    else
    {
        index = index - 1;
        Node *temp = head;
        while (index != 0)
        {
            temp = temp->next;
            index--;
        }
        // Inserting at Last Position
        if (temp->next == NULL)
        {
            insertAtEnd(tail, data);
            return;
        }

        // Creating a Node
        Node *n1 = new Node(data);
        n1->next = temp->next;
        temp->next = n1;
    }
}

// Printing the Linked list
void show(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Deletion the Node at the Beginning of the Linked List
void deleteAtStart(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }
    else
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

// Deletion the Node at the End of  the linked list
void deleteAtEnd(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        head = NULL;
        return;
    }
    else
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        tail->next = NULL;
        delete tail;
        temp->next = NULL;
        tail = temp;
    }
}

// Deletion the Node at the given position
void deleteAtAny(Node* &head, Node* &tail,int index){

    if(index == 0){
        deleteAtStart(head);
        return;
    }
    else if(index > size(head) - 1 ){
        cout<<"Not Enough Size of The Linked List"<<endl;
        return;
    }
    else if(size(head)-1 == index)
    {
        deleteAtEnd(head,tail);
    }

    else{
        Node* temp = head;
        Node* prev = NULL;
        while(index!=0){
            index--;
            prev = temp;
            temp = temp->next;
        }
        // delete temp->next;
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;
    
    }
}

int main()
{

    Node *NewNode = new Node(10);
    Node *head = NewNode;
    Node *tail = NewNode;
    insertAtEnd(tail,11);
    insertAtEnd(tail,12);
    insertAtEnd(tail,13);
    insertAtEnd(tail,14);
    insertAtEnd(tail,15);

    cout<<"Before Deletion"<<endl;
    show(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    deleteAtAny(head,tail,5);
    cout<<"After Deletion"<<endl;
    show(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;


    return 0;
}