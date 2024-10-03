import java.util.*;
import java.io.*;
class Node{
    int data;
    Node next;
    Node(int x){
        data=x;
        next=null;
    }
}



class ex
{
    public static void main(String[] args) {
        Node head=new Node(20);
        head.next=new Node(20);
        head.next.next=new Node(30);
        printlist(head);
    }
    public static void printlist(Node head){
        while(head!=null){
            System.out.print(head.data+" ");
            head=head.next;
        }
    }
}