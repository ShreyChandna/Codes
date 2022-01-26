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
Node *del(Node *head)
{
    if(head==NULL)
    return NULL;
    else if(head->next==head)
    {delete(head);
    return NULL;
    }
    else 
    {
        Node *temp=head;
        while(temp->next!=head)
        temp=temp->next;
        temp->next=head->next;
        delete(head);
        return temp->next;
    }

}
Node *del2(Node *head)
{
    if(head==NULL)
    return NULL;
    else if(head->next==head)
    {delete(head);
    return NULL;
    }
    else {
        head->data=head->next->data;
        Node *temp=head->next;
        head->next=head->next->next;
        delete(temp);
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
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    //head=del(head);
    //printlist(head);
    head=del2(head);
    printlist(head);
    }