#include <iostream> 
using namespace std; 

struct Node { 
	int data; 
	Node* next; 
	Node (int x){
	    data=x;
	    next=NULL;
	}
}; 

int getCount(Node* head) 
{ 
    Node* curr = head; 
    int count = 0; 
    while (curr != NULL) { 
        count++; 
        curr = curr->next; 
    } 
    return count; 
} 

int _getIntersection(int d, Node* head1, Node* head2) 
{ 
    Node* current1 = head1; 
    Node* current2 = head2; 
  
    for (int i = 0; i < d; i++) { 
        if (current1 == NULL) { 
            return -1; 
        } 
        current1 = current1->next; 
    } 
  
    while (current1 != NULL && current2 != NULL) { 
        if (current1 == current2) 
            return current1->data; 
  
        current1 = current1->next; 
        current2 = current2->next; 
    } 
  
    return -1; 
}

int getIntersection(Node* head1, Node* head2) 
{ 
    int c1 = getCount(head1); 
    int c2 = getCount(head2); 
    int d; 
  
    if (c1 > c2) { 
        d = c1 - c2; 
        return _getIntersection(d, head1, head2); 
    } 
    else { 
        d = c2 - c1; 
        return _getIntersection(d, head2, head1); 
    }
} 

int main() 
{ 
	Node* newNode; 

	Node* head1 = new Node(10); 

	Node* head2 = new Node(3); 

	newNode = new Node(6); 
	head2->next = newNode; 

	newNode = new Node(9); 
	head2->next->next = newNode; 

	newNode = new Node(15); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 

	newNode = new Node(30); 
	head1->next->next = newNode; 

	head1->next->next->next = NULL; 

	cout<<getIntersection(head1, head2); 
} 
