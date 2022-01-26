public class Vowel {
        public static void main(String [] args) {
        String a="hello";
        char b[]= a.toCharArray();
    
        for(int i=0;i<b.length;i++)
        {
            if(b[i]=='a'||b[i]=='A'||b[i]=='e'||b[i]=='E'||b[i]=='i'||b[i]=='I'||b[i]=='o'||b[i]=='O'||b[i]=='u'||b[i]=='U')
            b[i]='X';
        }
        for(int i=0;i<b.length;i++)
        System.out.print(b[i]);
            }
    
        }
    

