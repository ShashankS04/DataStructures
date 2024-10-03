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

bool isLoop(Node *head){
    Node *slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
}

int main(){
    Node *head=new Node(10);
    Node *temp=new Node(20);
    Node *temp1=new Node(30);
    head->next=temp;
    temp->next=temp1;
    temp1->next=head;
    bool s=isLoop(head);
    if(s)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}