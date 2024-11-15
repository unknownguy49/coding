import java.util.*;
class BinarySearch
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        
        int arr[];
        System.out.println("Enter number of elements");
        int n=sc.nextInt();
        arr=new int[n];
        
        System.out.println("Enter elements in the array");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        
        System.out.println("Enter element to search");
        int ele=sc.nextInt();
        
        Arrays.sort(arr);
        int left=0;
        int right=arr.length-1;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(arr[mid]==ele)
            {
                System.out.println("Element found");
                return;
            }
            if(arr[mid]<ele)
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        
        System.out.println("Element not found");
    }
}