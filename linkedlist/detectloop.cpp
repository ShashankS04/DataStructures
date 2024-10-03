#include<iostream>
#include<unordered_set>
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
    unordered_set<Node *> s;
    for(Node *n=head;n!=NULL;n=n->next){
        if(s.find(n)!=s.end())
        return true;
        s.insert(n);
    }
    return false;
}

int main(int argc, char const *argv[])
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    bool s=isLoop(head);
    if(s)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
