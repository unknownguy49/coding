import java.util.*;
class VigenereCipher
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter text to encrypt:");
        String text=sc.nextLine().toUpperCase();
        System.out.println("Enter key:");
        String key=sc.nextLine().toUpperCase();
        String encryptedText=encrypt(text,key);
        System.out.println("Encrypted message: "+encryptedText);
    }

    static String encrypt(String text,String key)
    {
        StringBuilder result=new StringBuilder();
        int keyIndex=0;
        for(int i=0;i<text.length();i++)
        {
            char ch=text.charAt(i);
            if(ch>='A'&&ch<='Z')
            {
                int offset=key.charAt(keyIndex)-'A';
                char encryptedChar=(char)((ch-'A'+offset)%26+'A');
                result.append(encryptedChar);
                keyIndex=(keyIndex+1)%key.length();
            }
            else
            {
                result.append(ch);
            }
        }
        return result.toString();
    }
}