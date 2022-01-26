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
// /* Function to insertAtBeginning a node */
// void insertAtBeginning(struct LLNode** head, int dataToBeInserted)
// {
//     struct LLNode* curr = new LLNode;
//     curr->data = dataToBeInserted;
//     curr->next = NULL;    
//     if(*head == NULL)
//             *head=curr; //If this is first node make this as head of list
        
//     else
//         {
//             curr->next=*head; //else make the curr (new) node's next point to head and make this new node a the head
//             *head=curr;
//         }
        
//         //O(1) constant time
// }
 
//display linked list
// void display(struct LLNode**node)
// {
//     struct LLNode *temp= *node;
//     while(temp!=NULL)
//         {
//             if(temp->next!=NULL)
//             cout<<temp->data<<"->";
//             else
//             cout<<temp->data;
            
//             temp=temp->next; //move to next node
//         }
//         //O(number of nodes)
//     cout<<endl;
// }
// /* Function to swap nodes x and y in linked list by
//    changing links */
void printlist(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node *swapNodes(Node *head, int x, int y)
{
   //If x and y are same
   if (x == y)
   {
      return head;
   }
   //search for x and store previous of x
   Node *xprev = NULL, *xcurr = head;
   while (xcurr && xcurr->data != x)
   {
       xprev = xcurr;
       xcurr = xcurr->next;
   }
 
   //search for y and store previous of y
   Node *yprev = NULL, *ycurr = head;
   while (ycurr && ycurr->data != y)
   {
       yprev = ycurr;
       ycurr = ycurr->next;
   }
   //x or y not present
   if (xcurr == NULL || ycurr == NULL)
   {
       return head;
   }
   //If x is not head
   if (xprev != NULL)
   {
       xprev->next = ycurr;
   }
   //If x is head
   //make y as new head
   else
   { 
       head = ycurr;  
   }
   //If y is not head
   if (yprev != NULL)
       yprev->next = xcurr;
   //If y is head
   //make x as new head
   else
   {  
       head = xcurr;
   }
   // Swap next pointers
   Node *temp = ycurr->next;
   ycurr->next = xcurr->next;
   xcurr->next  = temp;
   return head;
}
 
//Main function
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(35);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    
    cout<<"Input linked list is: ";
    printlist(head);
    int x = 10, y = 40;
    swapNodes(head,x,y);
    cout<<"output LL after swapping "<<x<<" and "<<y<<" is: ";
    printlist(head);
    return 0;
}