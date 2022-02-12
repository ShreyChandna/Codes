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
int search(Node *root,int x)
{
    if(root==NULL)
    return false;
    else if(root->key==x)
    return true;
    else if (root->key>x)
    return search(root->left,x);
    else 
    return search(root->right,x);
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(8);
    root->right=new Node(20);
    root->left->left=new Node(5);
    root->left->right=new Node(9);
    cout<<(search(root,5)==1?"found":"not found");
    return 0;   

}