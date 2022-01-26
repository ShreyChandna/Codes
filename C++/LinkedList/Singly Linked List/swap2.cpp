#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *swap(Node *head,int x,int y)
{
    Node *curr=head;
    Node *temp=head;
    Node *xprev=head;
    Node *yprev=head;
    for(int i=1;i<x-2;i++)
    {
        curr=curr->next;}
        xprev=curr->next;//20
    for(int i=1;i<y-1;i++)
    {
        temp=temp->next;}
        yprev=temp->next;//40
        cout<<yprev->next->data;


        Node *temp1=NULL;
        temp1=curr->next;
        curr->next=temp->next;
        temp->next=temp1;
        
        temp->next->next=yprev->next;
        curr->next->next=xprev;
        return head;
}
void printlist(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head = swap(head, 2, 4);
    printlist(head);
    return 0;
}
