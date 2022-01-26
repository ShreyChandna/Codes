import java.util.Scanner;

public class Patt9 {
        public static void main(String[] args) {
            
            Scanner sc=new Scanner(System.in);
            
            int i, j, k;
            
            System.out.print("Enter Hollow Diamond Pattern Rows = ");
            int rows = sc.nextInt();
            
            System.out.println("Printing Hollow Diamond Star Pattern");
            
            for (i = 1 ; i <= rows; i++ ) 
            {
                for (j = 1 ; j <= rows - i; j++ ) 
                {
                    System.out.print(" ");	
                }
                for (k = 1 ; k <= i * 2 - 1; k++ ) 
                {
                    if (k == 1 || k == i * 2 - 1) {
                        System.out.print("*");
                    }
                    else {
                        System.out.print(" ");
                    }
                }
                System.out.println();
            }
            
            for (i = rows - 1 ; i > 0; i-- ) 
            {
                for (j = 1 ; j <= rows - i; j++ ) 
                {
                    System.out.print(" ");
                }
                for (k = 1 ; k <= i * 2 - 1; k++ ) 
                {
                    if (k == 1 || k == i * 2 - 1) {
                        System.out.print("*");
                    }
                    else {
                        System.out.print(" ");
                    }
                }
                System.out.println();
            }
        }
    }
    

