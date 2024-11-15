import java.util.*;
class BasicCalc 
{    
    float addition(float a,float b)
    {
        return a+b;
    }
    float subtraction(float a,float b)
    {
        return a-b;
    }
    float multiplication(float a,float b)
    {
        return a*b;
    }
    float division(float a,float b)
    {
        if(b==0) 
        return -1;
        return a/b;
    }

    public static void main(String args[])
    {
        BasicCalc c=new BasicCalc();
        Scanner sc=new Scanner(System.in);
        while(true)
        {
            System.out.println("To perform addition, press 1");
            System.out.println("To perform subtraction, press 2");
            System.out.println("To perform multiplication, press 3");
            System.out.println("To perform division, press 4");
            System.out.println("To exit, press 5");
            
            int choice=sc.nextInt();
            switch(choice)
            {
                case 1:
                    { 
                        System.out.print("Performing addition \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.println("The sum is: "+c.addition(n1,n2));
                        break;
                    }
                case 2:
                    { 
                        System.out.print("Performing subtraction \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.println("The difference is: "+c.subtraction(n1,n2));
                        break;
                    }
                case 3:
                    { 
                        System.out.print("Performing multiplication \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.println("The product is: "+c.multiplication(n1,n2));
                        break;
                    }
                case 4:
                    { 
                        System.out.print("Performing division \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.println("The quotient is: "+c.division(n1,n2));
                        break;
                    }
                case 5:
                    System.out.println("Exiting the system..."); 
                    System.exit(0);
                default:
                System.out.println("Invalid choice, please try again.");
            }
        }       
    }
}