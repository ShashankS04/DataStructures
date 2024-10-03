import java.util.*;

class Node{
    int data;
    Node next;
    Node(int x){
        data=x;
        next=null;
    }
}
public class circularlist {
    static void printlist(Node head)
    {
        if(head==null)
        return;
        Node temp=head;
        do{
            System.out.print(temp.data+" ");
            temp=temp.next;
        }while(temp!=head);
    }

    static Node insertBegin(Node head,int x){
        Node temp=new Node(x);
        if(head==null){
        temp.next=temp;
        return temp;}
        else{
            temp.next=head.next;
            head.next=temp;
            int t=head.data;
            head.data=temp.data;
            temp.data=t;
            return head;
        }
    }

    static Node insertEnd(Node head,int x){
        Node temp=new Node(x);
        if(head==null){
            temp.next=temp;
            return temp;
        }
        else{
            temp.next=head.next;
            head.next=temp;
            int t=head.data;
            head.data=temp.data;
            temp.data=t;
            return temp;
        }
    }

    static Node deleteHead(Node head){
        if(head==null)
        return null;
        if(head.next==head)
        return null;
        head.data=head.next.data;
        head.next=head.next.next;
        return head;
    }

    static Node deleteKth(Node head,int k){
        if(head==null)
        return null;
        if(k==1)
        return deleteHead(head);
        Node curr=head;
    for(int i=0;i<k-2;i++)
    curr=curr.next;
    curr.next=curr.next.next;
    return head;
    }

    public static void main(String[] args) {
        Node head=new Node(10);
        head.next=new Node(20);
        head.next.next=new Node(30);
        head.next.next.next=head;
        head=insertBegin(head, 40);
        head=insertEnd(head, 50);
        head=deleteHead(head);
        head=deleteKth(head,3);
        printlist(head);
    }
}
