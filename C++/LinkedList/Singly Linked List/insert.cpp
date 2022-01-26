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
Node *insertBeg(Node *head, int x)
{
    Node *curr = new Node(x);
    if (head == NULL)
        return curr;
    curr->next = head;
    return curr;
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = temp;
    return head;
}
void printlist(Node *h)
{
    while (h != NULL)
    {
        cout << (h->data) << " ";
        h = h->next;
    }
}
int main()
{
    Node *head = NULL;
    head = insertBeg(head, 40);
    head = insertBeg(head, 90);
    head = insertEnd(head, 100);
    head = insertEnd(head, 120);
    printlist(head);
}