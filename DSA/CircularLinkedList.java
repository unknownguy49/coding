import java.util.*;
class CircularLinkedList 
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
    Node tail=null;

    void create() 
    {
        int n;
        
        do 
        {
            System.out.println("Enter data");
            Node newNode=new Node(sc.nextInt());

            if(head==null) 
            {
                head=newNode;
                tail=newNode;
                newNode.next=head;
            } 
            else 
            {
                tail.next=newNode;
                tail=newNode;
                tail.next=head;
            }

            System.out.println("Enter 1 to add more data");
            n=sc.nextInt();
        } 
        while(n==1);
    }

    void insert() 
    {
        int n,pos;
        do 
        {
            System.out.println("Enter data");
            Node newNode=new Node(sc.nextInt());

            if(head==null) 
            {
                head=newNode;
                tail=newNode;
                newNode.next=head;
            } 
            else 
            {
                System.out.println("Insert: 1.Begin, 2.End, 3.Position");
                System.out.println("Enter your choice");
                int ch=sc.nextInt();

                switch(ch) 
                {
                    case 1:
                        newNode.next=head;
                        head=newNode;
                        tail.next=head;
                        break;

                    case 2:
                        tail.next=newNode;
                        tail=newNode;
                        tail.next=head;
                        break;

                    case 3:
                        System.out.println("Enter the position");
                        pos=sc.nextInt();
                        Node temp=head;
                        for (int i=1;i<pos-1;i++) 
                        {
                            temp=temp.next;
                        }
                        newNode.next=temp.next;
                        temp.next=newNode;
                        break;
                }
            }

            System.out.println("Enter 1 to insert more data");
            n=sc.nextInt();
        } 
        while(n==1);
    }

    void delete() 
    {
        int n,pos;
        do 
        {
            System.out.println("Delete: 1.Begin, 2.End, 3.Position");
            System.out.println("Enter your choice");
            int ch=sc.nextInt();

            switch(ch) 
            {
                case 1:
                    if(head!=null) 
                    {
                        if(head==tail) 
                        {
                            head=null;
                            tail=null;
                        } 
                        else 
                        {
                            head=head.next;
                            tail.next=head;
                        }
                    }
                    break;

                case 2:
                    if(head!=null) 
                    {
                        if(head==tail) 
                        {
                            head=null;
                            tail=null;
                        } 
                        else 
                        {
                            Node temp=head;
                            while(temp.next!=tail) 
                            {
                                temp=temp.next;
                            }
                            temp.next=head;
                            tail=temp;
                        }
                    }
                    break;

                case 3:
                    System.out.println("Enter the position");
                    pos=sc.nextInt();
                    Node temp2=head;
                    for (int i=1;i<pos-1;i++) 
                    {
                        temp2=temp2.next;
                    }
                    temp2.next=temp2.next.next;
                    break;
            }

            System.out.println("For deleting more data press 1");
            n=sc.nextInt();
        } 
        while(n==1);
    }

    void traverse() 
    {
        if(head==null) 
        {
            System.out.println("No linked list");
            return;
        }

        Node temp=head;
        do 
        {
            System.out.println(temp.data);
            temp=temp.next;
        } 
        while(temp!=head);
    }

    public static void main(String args[]) 
    {
        CircularLinkedList s=new CircularLinkedList();
        while(true) 
        {
            System.out.println("1.Create, 2.Insert, 3.Delete, 4.Traverse, 5.Exit");
            System.out.println("Enter choice");
            int ch=new Scanner(System.in).nextInt();

            switch(ch) 
            {
                case 1:
                    s.create();
                    break;

                case 2:
                    s.insert();
                    break;

                case 3:
                    s.delete();
                    break;

                case 4:
                    s.traverse();
                    break;

                case 5:
                    System.exit(0);
            }
        }
    }
}
