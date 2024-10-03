#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertSorted(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)
        return temp;
    if(x< head->data){
    temp->next=head;
    return temp;
    }
    Node *cur=head;
while(cur->next!=NULL && cur->next->data<x){
cur=cur->next;
}
temp->next=cur->next;
cur->next=temp;
return head;
}

void printList(Node *head){
    if(head==NULL)
    return ;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head=insertSorted(head,15);
    printList(head);
    return 0;
}