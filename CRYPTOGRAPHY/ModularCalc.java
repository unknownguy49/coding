import java.util.*;
class ModularCalc
{    
    float addition(float a,float b,int m)
    {
        return (a+b)%m;
    }
    float subtraction(float a,float b,int m)
    {
        return (a-b)%m;
    }
    float multiplication(float a,float b,int m)
    {
        return (a*b)%m;
    }
    
    public static void main(String args[])
    {
        ModularCalc c=new ModularCalc();
        Scanner sc=new Scanner(System.in);
        while(true)
        {
            System.out.println("To perform modular addition, press 1");
            System.out.println("To perform modular subtraction, press 2");
            System.out.println("To perform modular multiplication, press 3");
            System.out.println("To exit, press 4");
            
            int choice=sc.nextInt();
            switch(choice)
            {
                case 1:
                    {  
                        System.out.print("Performing modular addition \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.print("Enter the modulus number: ");
                        int n3=sc.nextInt();
                        System.out.println("The sum is: "+c.addition(n1,n2,n3));
                        break;
                    }
                case 2:
                    { 
                        System.out.print("Performing modular subtraction \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.print("Enter the modulus number: ");
                        int n3=sc.nextInt();
                        System.out.println("The difference is: "+c.subtraction(n1,n2,n3));
                        break;
                    }
                case 3:
                    { 
                        System.out.print("Performing modular multiplication \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        //System.out.println();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.print("Enter the modulus number: ");
                        int n3=sc.nextInt();
                        System.out.println("The product is: "+c.multiplication(n1,n2,n3));
                        break;
                    }
                case 4:
                    System.out.println("Exiting the system..."); 
                    System.exit(0);
                default:
                System.out.println("Invalid choice, please try again.");
            }    
        }
    }
}