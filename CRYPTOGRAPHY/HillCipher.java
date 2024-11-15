import java.util.*;
class HillCipher
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter 2x2 matrix key (4 integers):");
        int[][] k=new int[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                k[i][j]=sc.nextInt();
            }
        }

        System.out.println("Enter message to encrypt:");
        String msg=sc.next().toUpperCase().replaceAll("[^A-Z]","");
        if(msg.length()%2!=0) 
        msg+="X";

        StringBuilder enc=new StringBuilder();
        for(int i=0;i<msg.length();i+=2)
        {
            int x1=msg.charAt(i)-'A';
            int x2=msg.charAt(i+1)-'A';

            int y1=(k[0][0]*x1+k[0][1]*x2)%26;
            int y2=(k[1][0]*x1+k[1][1]*x2)%26;

            enc.append((char)(y1+'A')).append((char)(y2+'A'));
        }

        System.out.println("Encrypted text: "+enc.toString());
    }
}
