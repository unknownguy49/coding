import java.util.*;
class QueueWithLL 
{
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

    Node front,rear;

    void enqueue(int data) 
    {
        Node newNode=new Node(data);
        if(rear==null) 
        {
            front=rear=newNode;
        } 
        else 
        {
            rear.next=newNode;
            rear=newNode;
        }
    }

    void dequeue() 
    {
        if(front==null) 
        {
            System.out.println("Queue is empty");
        } 
        else 
        {
            int data=front.data;
            front=front.next;
            if(front==null) 
            {
                rear=null;
            }
            System.out.println("Dequeued element: "+data);
        }
    }

    void display() 
    {
        if(front==null) 
        {
            System.out.println("Queue is empty");
        } 
        else 
        {
            Node curr=front;
            while(curr!=null) 
            {
                System.out.print(curr.data+" ");
                curr=curr.next;
            }
            System.out.println();
        }
    }

    public static void main(String args[]) 
    {
        QueueWithLL q=new QueueWithLL();
        Scanner sc=new Scanner(System.in);

        while(true) 
        {
            System.out.println("1.Enqueue, 2.Dequeue, 3.Display, 4.Exit");
            System.out.print("Enter choice: ");
            int ch=sc.nextInt();
            
            switch(ch) 
            {
                case 1:
                    System.out.print("Enter data to enqueue: ");
                    int data=sc.nextInt();
                    q.enqueue(data);
                    break;
                case 2:
                    q.dequeue();
                    break;
                case 3:
                    q.display();
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}