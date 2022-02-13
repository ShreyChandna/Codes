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
Node *floor(Node *root,int x)
{
    Node *res=NULL;
    while(root!=NULL)
    {
        if(root->key==x)
        return root;
        else if(root->key>x)
        root=root->left;
        else 
        {
            res=root;
            root=root->right;

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
    int x=31;
   cout<<"Floor: "<<(floor(root,x)->key);
  return 0;  
}