#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key =k;
        left=right=NULL;
    }
};
int Kdist(Node *root,int k)
{
if(root==NULL)
return 0;
else if(k==0)
cout<<root->key<<" ";
else
{
    Kdist(root->left,k-1);  
    Kdist(root->right,k-1);
}
return 0;
}
int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    Kdist(root,2);
    return 0;
}