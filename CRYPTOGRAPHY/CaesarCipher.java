import java.util.*;
class CaesarCipher
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter word to encrypt using Caesar Cipher");
        String w=sc.nextLine();
        w=w.toUpperCase();
        String f="";
        
        for(int i=0;i<w.length();i++)
        {
            char ch=w.charAt(i);
            if(ch>='A'&&ch<='Z')
            {
                ch=(char)((ch-'A'+3)%26+'A');
            }
            f=f+ch;
        }
        
        System.out.println("Encrypted message: "+f);
    }
}