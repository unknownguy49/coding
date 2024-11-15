import java.util.*;
class PlayfairCipher
{
    public static void main(String args[])
    {
        int m=5,n=5;
        String a[][]=new String[m][n];
        System.out.println("Enter key:");
        String ky=new Scanner(System.in).next();
        String kmat[]=ky.split("");
        boolean used[]=new boolean[26];
        int k=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(k<kmat.length)
                {    
                    char ch=kmat[k].charAt(0);
                    if(ch>='A'&&ch<='Z'&&!used[ch-'A'])
                    {
                        a[i][j]=kmat[k];
                        used[ch-'A']=true;
                        k++;
                    }
                    else
                    {
                        k++;
                        j--;
                    }
                }
                else
                break;
            }
        }

        for(char c='A';c<='Z';c++)
        {
            if(c!='J'&&!used[c-'A'])
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(a[i][j]==null)
                        {
                            a[i][j]=String.valueOf(c);
                            used[c-'A']=true;
                            break;
                        }
                    }
                    if(used[c-'A'])
                    break;
                }    
            }    
        }

        System.out.println("The Key Matrix: ");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                System.out.print(a[i][j]+"\t");
            }
            System.out.println();
        }

        System.out.println("Enter word to encrypt using the key:");
        String word=new Scanner(System.in).nextLine().toUpperCase().replace("J","I").replaceAll("[^A-Z]","");
        if(word.length()%2!=0)
            word+="X";
        
        StringBuilder enc=new StringBuilder();
        
        for(int i=0;i<word.length();i+=2)
        {
            char c1=word.charAt(i),c2=word.charAt(i+1);
            int r1=0,c1p=0,r2=0,c2p=0;
            for(int r=0;r<m;r++)
            {
                for(int c=0;c<n;c++)
                {
                    if(a[r][c].equals(String.valueOf(c1))) {r1=r;c1p=c;}
                    if(a[r][c].equals(String.valueOf(c2))) {r2=r;c2p=c;}
                }
            }
            
            if(r1==r2)
            {
                enc.append(a[r1][(c1p+1)%n]);
                enc.append(a[r2][(c2p+1)%n]);
            }
            else if(c1p==c2p)
            {
                enc.append(a[(r1+1)%m][c1p]);
                enc.append(a[(r2+1)%m][c2p]);
            }
            else
            {
                enc.append(a[r2][c1p]);
                enc.append(a[r1][c2p]);
            }
        }
        
        System.out.println("Encrypted text: "+enc.toString());
    }
}