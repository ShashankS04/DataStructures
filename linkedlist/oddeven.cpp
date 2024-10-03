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

void printlist(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node *segregate(Node *head){
    Node *ee=NULL,*es=NULL,*os=NULL,*oe=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(es==NULL)
            {
                es=ee=curr;
            }
            else{
                ee->next=curr;
                ee=ee->next;
            }
        }
        else{
            if(os==NULL)
            os=oe=curr;
            else{
                oe->next=curr;
                oe=oe->next;
            }
        }
    }
    if(os==NULL||es==NULL)
    return head;

    ee->next=os;
    oe->next=NULL;
    return es;
}

int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head=segregate(head);
    printlist(head);
    return 0;
}