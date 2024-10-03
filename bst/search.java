import java.util.*;
class Node
{
    int key;
    Node left;
    Node right;
    Node(int x){
        key=x;
        left=null;
        right=null;
    }
}

class search
{
    static boolean searchbst(Node root,int x){
        if(root==null)
        return false;
        else if(root.key==x)
        return true;
        else if ((root.key>x)) 
        return searchbst(root.left, x);
        else
        return searchbst(root.right, x);
        
    }

    public static void main(String[] args) {
        Node root=new Node(15);
    	root.left=new Node(5);
    	root.left.left=new Node(3);
    	root.right=new Node(20);
    	root.right.left=new Node(18);
    	root.right.left.left=new Node(16);
    	root.right.right=new Node(80);
    	int x=16;
    	
    	if(searchbst(root,x))
    	    System.out.print("Found");
    	else
    	    System.out.print("Not Found");
    }
}