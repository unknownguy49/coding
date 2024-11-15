import java.util.Scanner;
import java.math.BigInteger;

class RSAlgorithm 
{
    public static void main(String args[]) 
    {
        int n1,n2;
        Scanner sc=new Scanner(System.in);
        
        System.out.print("Enter prime number 1: ");
        n1=sc.nextInt();
        
        System.out.print("Enter prime number 2: ");
        n2=sc.nextInt();
        
        int n=n1*n2;
        int nn=(n1-1)*(n2-1);

        int e=0;
        for(int i=2;i<nn;i++) 
        {
            if(gcd(i,nn)==1) 
            {
                e=i;
                break;
            }
        }

        int d=0;
        for(int k=1;k<nn;k++) 
        {
            if((k*e)%nn==1) 
            {
                d=k;
                break;
            }
        }

        System.out.print("Enter the message: ");
        sc.nextLine();
        String pt=sc.nextLine().toUpperCase();
        
        System.out.println("Encrypted Message:");
        StringBuilder encrypted=new StringBuilder();
        for(int o=0;o<pt.length();o++) 
        {
            char c=pt.charAt(o);
            if(c>='A'&&c<='Z') 
            {
                int m=c-'A';
                BigInteger M=BigInteger.valueOf(m);
                BigInteger C=M.pow(e).mod(BigInteger.valueOf(n));
                encrypted.append((char)(C.intValue()+'A'));
            } 
            else 
            {
                encrypted.append(c);
            }
        }
        System.out.println(encrypted.toString());
        
        System.out.println("\nDecrypted Message:");
        StringBuilder decrypted=new StringBuilder();
        for(int o=0;o<encrypted.length();o++) 
        {
            char c=encrypted.charAt(o);
            if(c>='A'&&c<='Z') 
            {
                int m=c-'A';
                BigInteger C=BigInteger.valueOf(m);
                BigInteger M=C.pow(d).mod(BigInteger.valueOf(n));
                decrypted.append((char)(M.intValue()+'A'));
            } 
            else 
            {
                decrypted.append(c);
            }
        }
        System.out.println(decrypted.toString());
    }
    
    static int gcd(int a,int b) 
    {
        while(b!=0) 
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
}