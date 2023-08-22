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
//Iterative Approach
int Search(Node* head,int x){
    Node *curr=head;
    int pos=1;
    while(curr!=NULL){
         if(curr->data==x)
            return pos;
         
         else{
             pos++;
             curr=curr->next;
         }
    }
    return -1;
}

//Recursive approach
int Rsearch(Node *head,int x){
    if(head==NULL) return -1;
    if(head->data==x) return 1;
    else{
        int res=Rsearch(head->next,x);
        if(res==-1) return -1;
        else 
        return res+1;
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
    cout<<Rsearch(head,30)<<endl;
    // PrintLL(head);
    return 0;
}
