import java.util.*;

/**
 * basic
 */
public class basic {
int bucket;
ArrayList<LinkedList<Integer>> table;
basic(int b)
{
    bucket=b;
    table=new ArrayList<LinkedList<Integer>> ();
    for(int i=0;i<b;i++)
    table.add(new LinkedList<Integer>());
}
void insert(int key)
{
    int i=key%bucket;
    table.get(i).add(key);
}
void delete(int key)
{
    int i=key%bucket;
    table.get(i).remove((Integer)key);
}
boolean search(int key)
{
    int i=key%bucket;
    return table.get(i).contains(key);
}
public static void main(String[] args) {
    basic b=new basic(7);
    b.insert(10);
    b.insert(20);
    b.insert(30);
    b.insert(7);
    b.insert(21);
    System.out.println(b.search(20));
    b.delete(20);
    System.out.println(b.table);
}    
}