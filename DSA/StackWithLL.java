import java.util.*;

class StackWithLL 
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

    Node temp;

    void push(int data)
    {
        Node newNode=new Node(data);
        newNode.next=temp;
        temp=newNode;
    }

    void pop() 
    {
        if(temp==null) 
        {
            System.out.println("Empty linked list");
        } 
        else 
        {
            int data=temp.data;
            temp=temp.next;
            System.out.println("Popped element: "+data);
        }
    }

    void display() 
    {
        if(temp==null) 
        {
            System.out.println("Stack is empty");
        } 
        else 
        {
            Node curr=temp;
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
        StackWithLL s=new StackWithLL();
        Scanner sc=new Scanner(System.in);

        while(true) 
        {
            System.out.println("1.Push, 2.Pop, 3.Display, 4.Exit");
            System.out.print("Enter choice: ");
            int ch=sc.nextInt();
            
            switch(ch) 
            {
                case 1:
                    System.out.print("Enter data to push: ");
                    int data=sc.nextInt();
                    s.push(data);
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    s.display();
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}
