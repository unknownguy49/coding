import java.util.*;
class InsertionSort
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int arr[];
        
        System.out.println("Enter size of the array");
        int n=sc.nextInt();
        arr=new int[n];
        
        System.out.println("Enter elements in the array");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        
        for(int i=1;i<n;i++)
        {
            int k=arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>k)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=k;
        }
        
        System.out.println("Array after sorting:");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}