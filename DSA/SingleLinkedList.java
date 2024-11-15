import java.util.*;
class SingleLinkedList
{
    Scanner sc=new Scanner(System.in);
    static class Node
    {
        int data;
        Node next;
        
        Node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }
    
    Node head=null;
    
    void create(int ele)
    {
        head=new Node(ele);
    }
    
    void insert()
    {
        int n,ch,pos;
        
        do
        {
            System.out.println("Enter data");
            Node newNode=new Node(sc.nextInt());
            
            System.out.println("Insert: 1.Begin,2.End,3.Position");
            ch=sc.nextInt();
            
            switch(ch)
            {
                case 1:
                    if(head==null)
                    {
                        head=newNode;
                    }
                    else
                    {
                        newNode.next=head;
                        head=newNode;
                    }
                    break;
                    
                case 2:
                    if(head==null)
                    {
                        head=newNode;
                    }
                    else if(head.next==null)
                    {
                        head.next=newNode;
                    }
                    else
                    {
                        Node t=head;
                        while(t.next!=null)
                        {
                            t=t.next;
                        }
                        t.next=newNode;
                    }
                    break;
                    
                case 3:
                    System.out.println("Enter position");
                    pos=sc.nextInt();
                    
                    if(pos<1)
                    System.out.println("Invalid position");
                    else if(pos==1)
                    {
                        newNode.next=head;
                        head=newNode;
                    }
                    else
                    {
                        Node tm=head;
                        for(int i=1;i<pos-1&&tm.next!=null;i++)
                        {
                            tm=tm.next;
                        }
                        if(tm==null)
                        {
                            System.out.println("Position out of bounds");
                            break;
                        }
                        newNode.next=tm.next;
                        tm.next=newNode;
                    }
                    break;
            }
            
            System.out.println("Enter 1 to enter more data");
            n=sc.nextInt();
        }
        while(n==1);
    }
    
    void delete()
    {
        int n,ch,pos;
        
        do
        {
            System.out.println("Delete: 1.Begin,2.End,3.Position");
            ch=sc.nextInt();
            
            switch(ch)
            {
                case 1:
                    if(head==null)
                    System.out.println("Empty list");
                    else
                    head=head.next;
                    break;
                    
                case 2:
                    if(head==null)
                    System.out.println("Empty list");
                    else if(head.next==null)
                    head=null;
                    else
                    {
                        Node t=head;
                        while(t.next.next!=null)
                        {
                            t=t.next;
                        }
                        t.next=null;
                    }
                    break;
                    
                case 3:
                    System.out.println("Enter position");
                    pos=sc.nextInt();
                    
                    if(pos<1)
                    System.out.println("Invalid position");
                    else if(pos==1)
                    head=head.next;
                    else
                    {
                        Node tm=head;
                        for(int i=1;i<pos-1&&tm.next!=null;i++)
                        {
                            tm=tm.next;
                        }
                        if(tm==null||tm.next==null)
                        {
                            System.out.println("Position out of bounds");
                            break;
                        }
                        
                        tm.next=tm.next.next;
                    }
            }
            
            System.out.println("Enter 1 to delete more data");
            n=sc.nextInt();
        }
        while(n==1);
    }
    
    void traverse()
    {
        Node t=head;
        while(t!=null)
        {
            System.out.print(t.data+"->");
            t=t.next;
        }
        System.out.println("null");
    }
    
    void reverse()
    {
        Node prev=null;
        Node curr=head;
        Node next=null;
        
        while(curr!=null)
        {
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        SingleLinkedList l=new SingleLinkedList();
        
        while(true)
        {
            System.out.println("1.Create,2.Insert,3.Delete,4.Traverse,5.Reverse,6.Exit\nEnter your choice");
            int ch=sc.nextInt();
            
            switch(ch)
            {
                case 1:
                    System.out.println("Enter data to create LL");
                    int data=sc.nextInt();
                    l.create(data);
                    break;
                case 2:
                    l.insert();
                    break;
                case 3:
                    l.delete();
                    break;
                case 4:
                    l.traverse();
                    break;
                case 5:
                    l.reverse();
                    break;
                case 6:
                    System.exit(0);
                default:
                    System.out.println("Wrong choice. Enter something from 1-6");
            }
        }
    }
}