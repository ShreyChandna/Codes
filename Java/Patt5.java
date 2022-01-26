import java.util.Scanner;

public class Patt5 {
        public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            int k = 0;
            System.out.println("enter the number of rows:");
            int n=sc.nextInt();
            for (int i = 1; i <= n; ++i,k=0) {
                for (int s = 1; s <=n-i; ++s) {
                    System.out.print("  ");
                }
    
                while (k != 2 * i - 1) {
                    System.out.print("* ");
                    ++k;
                }
                System.out.println();
            }
                    for (int i = n-1; i >= 1; --i,k=0) {
                        for (int s = 1; s <=n-i; ++s) {
                            System.out.print("  ");
                        }
            
                        while (k != 2 * i - 1) {
                            System.out.print("* ");
                            ++k;
                        }
                        System.out.println();
                        sc.close();
                    }
                }
            
            
        }
    
    

