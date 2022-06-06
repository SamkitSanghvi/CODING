/* CH 
Doubly Linked List

[prev|Data|Next] 
 */

#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for data "<<value<<endl;
    }
};
// Printing the DLL
void show(Node* &head){
    Node*temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Size of DLL
int size(Node* &head){
    Node*temp = head;
    int count = 0;
    while(temp !=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

// Insert a Node of DLL at Begining
void  insertAtStart(Node* &head,int data){  
    if(head == NULL){
        Node*te = new Node(data);
        head = te;
        return;
    }
    Node* n1 = new Node(data);
    Node* temp = head;
    n1->next = temp;
    temp->prev = n1; 
    head = n1;
}

// Insert a Node of DLL at End
void insertAtEnd(Node* &head, int data){
    Node*n1 = new Node(data);
    Node * temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n1;
    n1->prev = temp;
    n1 = temp;
}

// Insert a Node of DLL at any Position
void insertAtAny(Node* &head,int data,int index){
    if(index > size(head)){
        cout<<"Invalid OPeration"<<endl;
        return;
    }

    else if (index == 0){ 
        insertAtStart(head,data);
        return;
    }

    else if(index == size(head)){
        insertAtEnd(head,data);
        return;
    }
    else{ 
        index = index - 1;
        Node*n1 = new Node(data);
        Node * temp = head;
        while(index!=0){
            index--;
            temp = temp->next;
        }
        n1->next = temp->next;
        temp->next->prev = n1;
        n1->prev = temp;
        temp->next = n1;
    }
}

// Deletinon a Node of DLL at the Start
void deleteAtStart(Node * &head){
    if(head == NULL){
        cout<<"Linked List is empty!"<<endl;
        return;
    }
    else{
        Node * temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
}

// Deletion a Node of DLL at the end;
void deleteAtEnd(Node* &head){

    if(head == NULL){
        cout<<"Linked List is empty!"<<endl;
        return;
    }
    else if(head->next == NULL){
        head = NULL;
    }
    else{ 
        Node * temp = head;
        Node * pre = NULL;
        while(temp->next!= NULL){
            pre = temp;
            temp=temp->next;
        }
        temp->prev = NULL;
        pre->next = NULL;
        delete temp;
    }
}

// Deletion a Node of DLL at Any Position 
void deleteAtAny(Node* &head , int index){
    if(index == 0){
        deleteAtStart(head);
        return;
    }
    else if(size(head)-1 == index){
        deleteAtEnd(head);
        return;
    }
    else if(index > size(head)-1){
        cout<<"Not Enough Node"<<endl;
        return;
    }
    else{
        Node*temp = head;
        Node*pr = NULL;
        while(index!=0){ 
            index--;
            pr = temp;
            temp=temp->next;
        }
        pr->next = temp->next;
        temp->next->prev = pr;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
}





int main(){

    Node* n1 = new Node(10);
    Node*head = n1;
    insertAtEnd(head,11);
    insertAtEnd(head,12);
    insertAtEnd(head,13);
    insertAtEnd(head,14);
    show(head);
    cout<<"Head "<<head->data<<endl;

    cout<<"After Deleting "<<endl; 
    deleteAtAny(head,2);
    show(head);
    deleteAtAny(head,3);
    show(head); 
    deleteAtAny(head,2);
    show(head); 
    return 0;
}

