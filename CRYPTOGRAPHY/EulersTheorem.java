import java.util.*;
class EulersTheorem 
{
    static int gcd(int a,int b) 
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }

    static int eulerTotient(int n) 
    {
        int result=n;
        for (int i=2;i*i<=n;i++) 
        {
            if (n%i==0) 
            {
                while(n%i==0) 
                n/=i;
                result-=result/i;
            }
        }
        if(n>1) result-=result/n;
        return result;
    }

    static int modularExponentiation(int a,int b,int n) 
    {
        int res=1;
        a=a%n;
        while(b>0) 
        {
            if((b&1)==1) res=(res*a)%n;
            b>>=1;
            a=(a*a)%n;
        }
        return res;
    }

    static int eulerTheorem(int a,int b,int n) 
    {
        if(gcd(a,n)!=1) 
        {
            throw new IllegalArgumentException("a and n must be coprime for Euler's theorem.");
        }
        int phi=eulerTotient(n);
        int reducedExponent=b%phi;
        return modularExponentiation(a,reducedExponent,n);
    }

    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter base (a):");
        int a=sc.nextInt();
        System.out.println("Enter exponent (b):");
        int b=sc.nextInt();
        System.out.println("Enter modulus (n):");
        int n=sc.nextInt();

        try 
        {
            int result=eulerTheorem(a,b,n);
            System.out.println("Result of "+a+"^"+b+" mod "+n+" is: "+result);
        } 
        catch(IllegalArgumentException e) 
        {
            System.out.println(e.getMessage());
        }
    }
}