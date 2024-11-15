import java.util.*;
public class ExtendedEuclideanGCD 
{
    public static int extendedGCD(int a,int b) 
    {
        int result[]=extendedGCDHelper(a,b);
        int gcd=result[0];
        int x=result[1];
        int y=result[2];
        System.out.println("GCD: " + gcd);
        System.out.println("Coefficients: x = " + x + ", y = " + y);
        return gcd;
    }

    private static int[] extendedGCDHelper(int a,int b) 
    {
        if(b==0)
            return new int[] {a,1,0};

        int[] result=extendedGCDHelper(b,a%b);
        int gcd=result[0];
        int x1=result[1];
        int y1=result[2];
        int x=y1;
        int y=x1-(a/b)*y1;
        return new int[] {gcd,x,y};
    }

    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the first number (a): ");
        int a=sc.nextInt();
        System.out.print("Enter the second number (b): ");
        int b=sc.nextInt();
        extendedGCD(a,b);
    }
}