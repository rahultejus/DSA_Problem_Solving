#include<bits/stdc++.h>
using namespace std;
 struct  Node{
    int data;
    Node *next;
   Node(int x){
    data = x;
    next=NULL;
   }
 };
 
//  void printLL(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<" "<<curr->data<<endl;
//         curr=curr->next;
//  }
//  }
void rPrint(Node *head){
    if(head==NULL) return;
    cout<<" "<<head->data<<endl;
    rPrint(head->next);
}
//  void printlist(Node *head){
//   while(head!=NULL){
//     cout<<" "<<head->data<<endl;
//     head=head->next;
//   }
//  }
int32_t main()
{ 
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(80);
    rPrint(head);
    // printLL(head);
    // Node *head=new Node(10);
    // printlist(head);
    // printlist(head);
    // printlist(head);
    return 0;
}