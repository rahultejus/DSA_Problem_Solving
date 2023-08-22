#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next=NULL;
    }
};
Node *InsertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;
    Node *curr=head;
  while(curr->next!=NULL)
    curr=curr->next;
    curr->next=temp;
    return head;
}
Node *DelEnd(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
   Node *curr=head;
   while(curr->next->next!=NULL) //we ensuring here that the there will ne minimum 2 nodes to avoid segmentation faults.
      curr=curr->next;
      delete curr->next;
      curr->next=NULL;
      return head;
   
}
void PrintLL(Node *head){
    Node *curr=head;
    while(curr!=NULL)
    {
      cout<<curr->data<<endl;
      curr=curr->next;
    }
    
}
int32_t main()
{
    Node *head=NULL;
    head=InsertEnd(head,10);
    head=InsertEnd(head,20);
    head=InsertEnd(head,30);
    head=InsertEnd(head,40);
    head=InsertEnd(head,50);
    DelEnd(head);
    PrintLL(head);
    return 0;
}