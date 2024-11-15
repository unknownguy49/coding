import java.util.*;

class PrimalityTesting 
{
    static boolean isPrimeDeterministic(int n) 
    {
        if(n<=1) return false;
        if(n<=3) return true;
        if(n%2==0||n%3==0) return false;
        for(int i=5;i*i<=n;i+=6) 
        {
            if(n%i==0||n%(i+2)==0) return false;
        }
        return true;
    }

    static boolean isProbablePrime(int n,int k) 
    {
        if(n<=1||n==4) return false;
        if(n<=3) return true;

        int d=n-1;
        while(d%2==0) 
        {
            d/=2;
        }

        for(int i=0;i<k;i++) 
        {
            if(!millerTest(d,n)) return false;
        }
        return true;
    }

    static boolean millerTest(int d,int n) 
    {
        Random rand=new Random();
        int a=2+rand.nextInt(n-4);
        int x=power(a,d,n);
        if(x==1||x==n-1) return true;

        while(d!=n-1) 
        {
            x=(x*x)%n;
            d*=2;
            if(x==1) return false;
            if(x==n-1) return true;
        }
        return false;
    }

    static int power(int base,int exp,int mod) 
    {
        int res=1;
        base=base%mod;
        while(exp>0) 
        {
            if((exp&1)==1) res=(res*base)%mod;
            exp>>=1;
            base=(base*base)%mod;
        }
        return res;
    }

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number to test for primality:");
        int n=sc.nextInt();
        System.out.println("Choose method: 1 for Deterministic, 2 for Probabilistic:");
        int choice=sc.nextInt();

        switch(choice) 
        {
            case 1:
                if(isPrimeDeterministic(n)) 
                {
                    System.out.println(n+" is prime (Deterministic Test).");
                } 
                else 
                {
                    System.out.println(n+" is not prime (Deterministic Test).");
                }
                break;

            case 2:
                System.out.println("Enter number of iterations for Probabilistic Test:");
                int k=sc.nextInt();
                if(isProbablePrime(n,k)) 
                {
                    System.out.println(n+" is probably prime (Probabilistic Test).");
                } 
                else 
                {
                    System.out.println(n+" is not prime (Probabilistic Test).");
                }
                break;

            default:
                System.out.println("Invalid choice!");
        }
    }
}