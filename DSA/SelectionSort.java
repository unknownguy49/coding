import java.util.*;
class SelectionSort
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of the array");
        int sz=sc.nextInt();
        int a[]=new int[sz];
        
        System.out.println("Enter values into the array: ");
        for(int i=0;i<sz;i++)
        {
            a[i]=sc.nextInt();
        }
        
        for(int i=0;i<sz-1;i++)
        {
            int minval=a[i];
            int minidx=i;
            
            for(int j=i+1;j<sz;j++)
            {
                if(a[j]<minval)
                {
                    minval=a[j];
                    minidx=j;
                }
            }
            
            int temp=a[i];
            a[i]=a[minidx];
            a[minidx]=temp;
        }
        
        System.out.println("Array after sorting: ");
        for(int i=0;i<sz;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}