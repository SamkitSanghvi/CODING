/*
    creation of Binary Tree
*/


#include<bits/stdc++.h>
using namespace std;

// Structure of Node 
class node{
    public: 
        int data;
        node* left;
        node* right;

        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

node* buildTree(node* root){

    cout<<"Enter the Data "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if(data == -1)
        return NULL;
    
    cout<<"Enter the Data for left Side part of "<<data<<endl;
    root->left = buildTree(root->left);
    
    cout<<"Enter the Data for right Side part of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
    
}

/* Level Order Traversal (Breadtd First Search)
    travel Level by level
            1
        3       5
     7    11  17 null
   null null null null

    we will traverse level by level by until we not get all value null
    1 3 5 7 11 17 ..
*/
void levelOrderTraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node*temp = q.front();
        q.pop();

        if(temp == NULL){ // old level completed 
            cout<<endl;
            if(!q.empty()) // queue has still chilf node
                q.push(NULL);
        }

        else{
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

// Inorder Traversal
void Inorder(node* root){
    if(root == NULL)
    return ;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

// Preorder Traversal
void Preorder(node* root){
    if(root == NULL)
    return ;

    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
// PostOrder Traversal
void Postorder(node* root){
    if(root == NULL)
    return ;

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

/* Create From Level Order Traversal */
node* buildFromLevelOrder(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node*temp = q.front();
        
    }
}

int main()
{

    node* root = NULL;
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 15 17 -1 -1 -1
    // levelOrderTraversal  
    cout<<"Printing the Level Order Traversal "<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder Traversal "<<endl;
    Inorder(root);
    cout<<endl;

    cout<<"preOrder Traversal "<<endl;
    Preorder(root);
    cout<<endl;

    cout<<"PostOrder Traversal "<<endl;
    Postorder(root);
    cout<<endl;

    return 0;
}