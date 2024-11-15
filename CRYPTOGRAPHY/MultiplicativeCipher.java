import java.util.*;
class MultiplicativeCipher
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter word to encrypt using Multiplicative Cipher:");
        String w=sc.nextLine().toUpperCase();
        System.out.println("Enter key (must be coprime with 26):");
        int key=sc.nextInt();
        String f="";
        
        for(int i=0;i<w.length();i++)
        {
            char ch=w.charAt(i);
            if(ch>='A'&&ch<='Z')
            {
                int pos=ch-'A';
                pos=(pos*key)%26;
                ch=(char)(pos+'A');
            }
            f+=ch;
        }
        
        System.out.println("Encrypted message: "+f);
    }
}