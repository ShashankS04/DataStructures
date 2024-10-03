#include<iostream>
using namespace std;
struct Node{
    int Data;
    Node* prev;
    Node* next;
    Node(int x){
        Data = x;
        next=NULL;
        prev=NULL;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    if(head!=NULL)
    head->prev=temp;
    return temp;
}

void printlist(Node *head){
    while(head!=NULL){
        cout<<head->Data<<" ";
        head=head->next;
    }
}

Node *insertEnd(Node *head,int n){
    Node *temp=new Node(n);
    if(head==NULL)
    return temp;
    Node *cur=head;
    while(cur->next!=NULL)
    cur=cur->next;
    cur->next=temp;
    temp->prev=cur;
    return head;
}

Node *ReverseDL(Node *head){
    Node *temp=NULL;
    Node *curr=head;
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp!=NULL)
    head=temp->prev;
    return head;
}

Node *deleteHead(Node *head){
    if(head==NULL)
    return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;    
    }
    else{
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}

Node *deleteLast(Node *head){
    if(head==NULL)
    return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node *curr=head;
        while(curr->next!=NULL)
        curr=curr->next;
        curr->prev->next=NULL;
        delete curr;
        return head;
    }
}

int main(){
    Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
    head=insertBegin(head,30);
    head=insertEnd(head,40);
    head=ReverseDL(head);
    head=deleteHead(head);
    head=deleteLast(head);  
    printlist(head);
    return 0;
}