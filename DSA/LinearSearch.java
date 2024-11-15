import java.util.*;
class LinearSearch
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int arr[];
        
        System.out.println("Enter number of elements");
        int n=sc.nextInt();
        arr=new int[n];
        
        System.out.println("Enter elements into the array");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        
        System.out.println("Enter element to search");
        int ele=sc.nextInt();
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==ele)
            {
                System.out.println("Element found");
                return;
            }
        }
        System.out.println("Element not found");
    }
}