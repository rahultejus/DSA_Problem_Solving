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
Node *Insert_pos(Node *head,int data,int pos){
    Node *temp=new Node(data);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i=1;i<=pos-2;i++)
    curr=curr->next;
    if(curr==NULL)
        return head;
        temp->next=curr->next;
        curr->next=temp;
        return head;
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
    head=Insert_pos(head,21,2);
    PrintLL(head);
    return 0;
}