#include<iostream>
struct Node{
    int data;
    Node *next;
    Node (int x)
{
    data=x;
    next=NULL;
}};
int searchlist(Node *head,int n){
    if(head==NULL)
    return -1;
    if(head->data==n)
    return 1;
    else{
        int res=searchlist(head->next,n);
        if(res==-1)
        return -1;
        else
        return res+1;
    }
}

int main(int argc, char const *argv[])
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    int r=searchlist(head,2);
    std::cout<<r<<" ";
    return 0;
}
