import java.util.*;
class FermatsLittleTheorem 
{
    static int gcd(int a,int b) 
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }

    static boolean isPrime(int n) 
    {
        if(n<=1) return false;
        if(n<=3) return true;
        if(n%2==0||n% 3==0) return false;
        for(int i=5;i*i<=n;i+=6) 
        {
            if(n%i==0||n%(i+2)==0) return false;
        }
        return true;
    }

    static int modularExponentiation(int a,int b,int p) 
    {
        int res=1;
        a=a%p;
        while(b>0) 
        {
            if((b&1)==1) res=(res*a)%p;
            b>>=1;
            a=(a*a)%p;
        }
        return res;
    }

    static int fermatTheorem(int a,int b,int p) 
    {
        if(!isPrime(p)) 
        {
            throw new IllegalArgumentException("p must be a prime number for Fermat's Little Theorem.");
        }
        if(gcd(a,p)!=1) 
        {
            throw new IllegalArgumentException("a and p must be coprime for Fermat's Little Theorem.");
        }
        int reducedExponent=b%(p-1);
        return modularExponentiation(a,reducedExponent,p);
    }

    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter base (a):");
        int a=sc.nextInt();
        System.out.println("Enter exponent (b):");
        int b=sc.nextInt();
        System.out.println("Enter prime modulus (p):");
        int p=sc.nextInt();

        try 
        {
            int result=fermatTheorem(a,b,p);
            System.out.println("Result of "+a+"^"+b+" mod "+p+" is: "+result);
        } 
        catch(IllegalArgumentException e) 
        {
            System.out.println(e.getMessage());
        }
    }
}