#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node  *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    printlist(head);
    return 0;
}
