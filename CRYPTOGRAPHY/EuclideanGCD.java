import java.util.*;
class EuclideanGCD 
{
    public static int gcd(int a,int b) 
    {
        while(b!=0) 
        {
            int remainder=a%b;
            a=b;
            b=remainder;
        }
        return a;
    }

    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the first number (a): ");
        int a=sc.nextInt();
        System.out.print("Enter the second number (b): ");
        int b=sc.nextInt();
        int res=gcd(a,b);
        System.out.println("The GCD of "+a+" and "+b+" is: "+res);
    }
}