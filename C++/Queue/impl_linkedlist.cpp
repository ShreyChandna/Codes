#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct Queue{
    Node *front,*rear;
    int size;
    Queue()
    {
        front=rear=NULL;
        size=0;
    }

void enQueue(int x)
{
    Node *temp=new Node(x);
    if(front==NULL)
    {
        front=rear=temp;
    }
    else
    rear->next=temp;
    rear=temp;
}
void deQueue()
{   Node *temp=front;
    front=front->next;
    if(front==NULL)
    rear=NULL;    
    delete(temp);
}
};
int main() 
{ 

	Queue q; 
	q.enQueue(10); 
	q.enQueue(20); 
	q.deQueue(); 
	q.deQueue(); 
	q.enQueue(30); 
	q.enQueue(40); 
	q.enQueue(50); 
	q.deQueue(); 
	cout << "Queue Front : " << (q.front)->data << endl; 
	cout << "Queue Rear : " << (q.rear)->data; 
} 