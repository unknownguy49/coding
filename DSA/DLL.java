import java.util.*;

class DLL
{
    static class Node
    {
        int data;
        Node next;
        Node prev;
        
        Node(int data)
        {
            this.data=data;
            this.next=null;
            this.prev=null;
        }
    }
    
    Node head=null;
    Node tail=null;
    
    void create()
    {
        int data;
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter the data");
        data=sc.nextInt();
            
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            head.prev=newNode;
            newNode.next=head;
            head=newNode;
        }
    }
    
    void insertEnd()
    {
        int data;
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter the data");
        data=sc.nextInt();
            
        Node newNode=new Node(data);
        if(head==null)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            Node temp=head;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.next=newNode;
            newNode.prev=temp;
        }
    }

    void deleteEnd()
    {
        if(head==null)
        {
            System.out.println("Linked list does not exist");
        }
        else if(head.next==null)
        {
            head=null;
        }
        else
        {
            Node temp=head;
            while(temp.next!=null)
            {
                temp=temp.next;
            }
            temp.prev.next=null;
        }
    }
    
    void insertBegin()
    {
        int data;
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter the data");
        data=sc.nextInt();
            
        Node newNode=new Node(data);
            
        if(head==null)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            newNode.next=head;
            head.prev=newNode;
            head=newNode;
        }
    }
    
    void deleteBegin()
    {
        if(head==null)
        {
            System.out.println("Linked list does not exist");
        }
        else
        {
            head=head.next;
            if(head!=null)
            {
                head.prev=null;
            }
        }
    }
    
    void display()
    {
        Node temp=head;
        if(head==null)
        {
            System.out.println("No DLL");
        }
        else
        {
            while(temp!=null)
            {
                System.out.print(temp.data+" ");
                temp=temp.next;
            }
            System.out.println();
        }
    }
    
    public static void main(String args[])
    {
        DLL d=new DLL();
        Scanner sc=new Scanner(System.in);
        int ch;
        
        do
        {
            System.out.println("1.Create, 2.Insert at End, 3.Delete from End, 4.Insert at Beginning, 5.Delete from Beginning, 6.Display, 7.Exit");
            System.out.print("Enter your choice: ");
            ch=sc.nextInt();
            
            switch(ch)
            {
                case 1:
                    d.create();
                    break;
                case 2:
                    d.insertEnd();
                    break;
                case 3:
                    d.deleteEnd();
                    break;
                case 4:
                    d.insertBegin();
                    break;
                case 5:
                    d.deleteBegin();
                    break;
                case 6:
                    d.display();
                    break;
                case 7:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        }
        while(ch!=7);
    }
}