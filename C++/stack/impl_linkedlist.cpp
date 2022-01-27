#include <bits/stdc++.h>
using namespace std;
struct Node{
    Node *next;
    int data;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct MyStack{
    Node *head;
    int sz;
    MyStack()
    {
      head=NULL,sz=0;
      
    }
    void push(int x)
    {
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        sz++;
    }
    int pop()
    {
        if(head==NULL)
        return INT_MAX;
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty(){
    return (head==NULL);
    }
    int peek()
    {
        if(head==NULL)
        return INT_MAX;
        return head->data;
    }
};
int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty();
    return 0;
}