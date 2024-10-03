import java.util.*;

class Node{
    int data;
    Node next;
    Node(int x){
        data=x;
        next=null;
    }
}

class removeduplicate{
    static Node removedup(Node head){
        Node temp=head;
        while(temp!=null&&temp.next!=null)
        {
            if(temp.data==temp.next.data)
            temp.next=temp.next.next;
            else
            temp=temp.next;
        }
        return head;
    }
    static void printlist(Node head){
        while(head!=null||head.next!=null){
        System.out.println(head.data);
        head=head.next;
        }
    }
    public static void main(String[] args) {
        Node head=new Node(10);
        head.next=new Node(10);
        head.next.next=new Node(20);
        head=removedup(head);
        printlist(head);
        }
}