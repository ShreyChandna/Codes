#include<bits/stdc++.h> 

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

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}


Node *insertatpos(Node *node, int pos, int val){
    Node *temp = new Node(val);
    if(pos == 1){
        temp ->next = node;
        return temp;
    }

    Node *curr = node;
    for(int i=1;i<pos-1 && curr!=NULL;i++){
        curr = curr->next;
    }

    if(curr == NULL){
        return node;
    }

    temp->next = curr->next;
    curr->next = temp;

    return node;

}

Node *swap2node(Node *node, int c1,int c2){
    int count=1;
    Node *curr = node;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    Node *temp = node;
    Node *temp1 = node;
    
    for(int i=1;i<c1-1;i++){
        temp=temp->next;
    }
    for(int i=1;i<c2-1;i++){
        temp1 = temp1->next;
    }
    
    Node *temp3,*temp4;
    temp3 = temp->next;
    temp4 = temp1->next;
    temp->next = temp->next->next;
    temp1->next = temp1->next->next;
    
 
    // cout<<temp4->data<<endl;
    Node *finalnode = insertatpos(node,c1,temp4->data);
    finalnode = insertatpos(finalnode,c2,temp3->data);
    return finalnode;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    

    head = swap2node(head,2,3);
    printList(head);
    return 0;
}