import java.util.*;
class AffineCipher
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter word to encrypt using Affine Cipher");
        String w=sc.nextLine();
        w=w.toUpperCase();
        
        String f="";
        
        System.out.println("Enter key 1 and key 2 for encryption");
        int k1=sc.nextInt();
        int k2=sc.nextInt();
        
        char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        
        for(int i=0;i<w.length();i++)
        {
            char ch=w.charAt(i);
            if(ch==' ')
            {
                f=f+ch;
                continue;
            }
            
            for(int j=0;j<a.length;j++)
            {
                if(ch==a[j])
                {
                    int d=(j*k1+k2)%26;
                    ch=(char)(d+65);
                    f=f+ch;
                    break;
                }
                
            }
            
        }
        System.out.println("Encrypted message: "+f);
    }
}