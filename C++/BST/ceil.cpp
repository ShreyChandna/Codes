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
Node *ceil(Node *root,int x)
{
    Node *res=NULL;
    while(root!=NULL)
    {
        if(root->key==x)
        return root;
        else if(root->key<x)
        root=root->right;
        else 
        {
            res=root;
            root=root->left;

        }
    }
    return res;
}
int main(){
    Node *root=new Node(30);
    root->left=new Node(20);
    root->right=new Node(40);
    root->left->left=new Node(10);
    root->left->right=new Node(25);
    int x=7;
   cout<<"Floor: "<<(ceil(root,x)->key);
  return 0;  
}