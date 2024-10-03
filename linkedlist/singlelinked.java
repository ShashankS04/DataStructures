import java.util.*;

class Node{
    int data;
    Node next;
    Node(int x){
        data=x;
        next=null;
    }
}
public class singlelinked {
    public static void main(String[] args) {
        Node head=null;
        head=insertAtBegin(head,5);
        head=insertAtBegin(head,6);
        head=insertAtBegin(head, 7);
        head=insertAtEnd(head, 50);
        head=insertPos(head,44,2);
        head=deleteHead(head);
        deleteLast(head);
        printlist(head);
    }

    static Node insertAtBegin(Node head,int n){
        Node temp=new Node(n);
        temp.next=head;
        return temp;
    }

    static void printlist(Node head){
        while(head!=null){
            System.out.print(head.data+" ");
            head=head.next;
        }
    }

    static Node insertPos(Node head,int n,int p){
        Node temp=new Node(n);
        if(p==1){
            temp.next=head;
            return temp;
        }
        Node cur=head;
        for(int i=1;i<=p-2&&cur!=null;i++)
        cur=cur.next;
        if(cur==null)
        return head;
        temp.next=cur.next;
        cur.next=temp;
        return head;
    }

    static Node insertAtEnd(Node head,int n){
        Node temp=new Node(n);
        if(head==null)
        return temp;
        Node curr=head;
        while(curr.next!=null)
        curr=curr.next;
        curr.next=temp;
        return head;
    }

    static Node deleteHead(Node head)
    {
        if(head==null)
        return null;
        else
        return head.next;
    }
    static Node deleteLast(Node head){
        if(head==null)
        return null;
        if(head.next==null)
        return null;
        Node curr=head;
        while(curr.next.next!=null)
        curr=curr.next;
        curr.next=null;
        return head;
    }
}
