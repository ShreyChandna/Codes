#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
    data=x;
    next=NULL;
    }
};
//NAIVE SOLUTION
Node *insert(Node *head,int data)
{   Node *curr=new Node(data);
    if(head==NULL)
    {curr->next=curr;
    return curr;}
    else{
    Node *temp=head;
    while(temp->next!=head)
    temp=temp->next;
    temp->next=curr;
    curr->next=head;}
    return curr;
}
//EFFICIENT SOLTUOION
Node *ins(Node *head,int data)
{
    Node *curr=new Node(data);
    if(head==NULL)
    {curr->next=curr;
    return curr;}
    else
    {
        curr->next=head->next;
        head->next=curr;
        int t=head->data;
        head->data=curr->data;
        curr->data=t;
        return head;
    }
}

void printlist(Node *head)
{
    if(head==NULL)
    return;
    Node *p=head;
    do{
       cout<<p->data<<" ";
       p=p->next;
    }
    while(p!=head);
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    head=insert(head,50);
    printlist(head);    
    head=ins(head,60);
    printlist(head);
    }