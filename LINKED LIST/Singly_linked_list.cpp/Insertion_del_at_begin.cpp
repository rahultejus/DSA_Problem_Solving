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
Node *delBegin(Node *head)
{
    if(head==NULL) return NULL;
    else{
        Node *temp=head->next;
        head->next=NULL;
        return temp;
    }
}
Node *Insertbegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
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
    head=Insertbegin(head,30);
    head=Insertbegin(head,20);
    head=Insertbegin(head,10);
    head=delBegin(head);
    PrintLL(head);
    return 0;
}