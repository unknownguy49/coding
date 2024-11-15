import java.util.*;
public class ChineseRemainderTheorem 
{
    int mmi(int x,int m) 
    {
        int m0=m,t,q;
        int y=0,z=1;

        if(m==1) 
        return 0;
    
        while(x>1) 
        {
            q=x/m;
            t=m;
            m=x%m;
            x=t;
            t=y;
            y=z-q*y;
            z=t;
        }
    
        if(z<0) 
        z+=m0;
        return z;
    }

    public static void main(String args[]) 
    {
        Scanner sc=new Scanner(System.in);
        ChineseRemainderTheorem crt = new ChineseRemainderTheorem();

        System.out.println("Enter the number of equations:");
        int neq=sc.nextInt();
        int M=1;
        int X=0;
        int arr[][]=new int[neq][2];

        for(int i=0;i<neq;i++) 
        {
            System.out.println("Enter the value of a:");
            int a=sc.nextInt();
            arr[i][0]=a;
            System.out.println("Enter the value of m:");
            int m=sc.nextInt();
            arr[i][1]=m;
            M*=m;
        }

        for(int j=0;j<neq;j++) 
        {
            int x=M/arr[j][1];
            int y=crt.mmi(x,arr[j][1]);
            X+=arr[j][0]*x*y;
        }

        System.out.println("The value of X is: "+(X%M));
    }
}
