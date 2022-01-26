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
Node *rev(Node *head)
{   Node *temp=NULL;
    Node *curr=head;
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    return head;
    while(curr!=NULL)
    {temp=curr->prev;
    curr->prev=curr->next;
    curr->next=temp;
    curr=curr->prev;}
    return temp->prev;
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
    head=rev(head);
    printlist(head);
    return 0;
}