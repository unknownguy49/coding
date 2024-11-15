import java.util.*;
class ModularCalculator
{
    float addition(float a,float b,int m)
    {
        return (a+b)%m;
    }
    float subtraction(float a,float b,int m)
    {
        return (a-b+m)%m;
    }
    float multiplication(float a,float b,int m)
    {
        return (a*b)%m;
    }
    float division(float a,float b,int m)
    {
        int inv=modularInverse((int)b,m);
        if(inv==-1) 
        {
            throw new ArithmeticException("Division not possible (no modular inverse)");
        }
        return (a*inv)%m;
    }
    float additiveInverse(float a,int m)
    {
        return (m-(a%m))%m;
    }
    int modularInverse(int b,int m)
    {
        b=b%m;
        for(int x=1;x<m;x++) 
        {
            if((b*x)%m==1) return x;
        }
        return -1;
    }

    public static void main(String args[])
    {
        ModularCalculator c=new ModularCalculator();
        Scanner sc=new Scanner(System.in);
        while(true)
        {
            System.out.println("To perform modular addition, press 1");
            System.out.println("To perform modular subtraction, press 2");
            System.out.println("To perform modular multiplication, press 3");
            System.out.println("To perform modular division, press 4");
            System.out.println("To find additive inverse, press 5");
            System.out.println("To exit, press 6");
            
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
                        System.out.println("The sum is: " + c.addition(n1, n2, n3));
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
                        System.out.println("The difference is: " + c.subtraction(n1, n2, n3));
                        break;
                    }
                case 3:
                    {
                        System.out.print("Performing modular multiplication \nEnter the first number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the second number: ");
                        float n2=sc.nextFloat();
                        System.out.print("Enter the modulus number: ");
                        int n3=sc.nextInt();
                        System.out.println("The product is: " + c.multiplication(n1, n2, n3));
                        break;
                    }
                case 4:
                    {
                        System.out.print("Performing modular division \nEnter the numerator: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the denominator: ");
                        float n2=sc.nextFloat();
                        System.out.print("Enter the modulus number: ");
                        int n3=sc.nextInt();
                        try 
                        {
                            System.out.println("The result is: "+c.division(n1,n2,n3));
                        } 
                        catch(ArithmeticException e) 
                        {
                            System.out.println(e.getMessage());
                        }
                        break;
                    }
                case 5:
                    {
                        System.out.print("Finding additive inverse \nEnter the number: ");
                        float n1=sc.nextFloat();
                        System.out.print("Enter the modulus number: ");
                        int n3=sc.nextInt();
                        System.out.println("The additive inverse is: " + c.additiveInverse(n1, n3));
                        break;
                    }
                case 6:
                    System.out.println("Exiting the system...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice, please try again.");
            }
        }
    }
}