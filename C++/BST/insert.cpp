#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
Node *insert(Node *root,int x)
{   Node *temp=new Node(x);
    Node *curr=root,*parent=NULL;
    while(curr!=NULL)
    {
        parent=curr;
        if(curr->key>x)
        curr=curr->left;
        else if(curr->key<x)
        curr=curr->right;
        else
        return root;
    }
    if(parent==NULL)
    return temp;
    else if(parent->key>x)
    parent->left=temp;
    else
    parent->right=temp;
    return root;
}
void inorderTraversal(Node *root)
{
    if(root!=NULL)
    {inorderTraversal(root->left);
    cout<<root->key<<" ";
    inorderTraversal(root->right);
    }
}
int main(){
   	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	root=insert(root,x);
    inorderTraversal(root);
    return 0;   
}