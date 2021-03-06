#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
    data=x;
    next=prev=NULL;
    }
};
Node *insert(Node *head,int data)
{
    Node *curr=new Node(data);
    curr->next=head;
    if(head!=NULL)
    head->prev=curr;
    return curr;
}
void printlist(Node *head)
{
    while(head!=NULL)
    {cout<<head->data<<" ";
    head=head->next;}
}
int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(30);
    Node *temp2=new Node(40);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=insert(head,20);
    printlist(head);
    return 0;
}