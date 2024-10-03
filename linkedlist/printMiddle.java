import java.util.*;

class Node{
    int data;
    Node next;
    Node(int x){
        data=x;
        next=null;
    }
}
class printMiddle{
static void printM(Node head){
    if(head==null)
    return;
    Node slow=head,fast=head;
    while(fast!=null&&fast.next!=null)
    {
        slow=slow.next;
        fast=fast.next.next;
    }
    System.out.println(slow.data);
}

public static void main(String[] args) {
    Node head=new Node(10);
    head.next=new Node(20);
    head.next.next=new Node(30);
    head.next.next.next=new Node(40);
    printM(head);
}
}