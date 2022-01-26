public class Patt4 {
    public static void main(String[] args) {
        int k = 0;
        for (int i = 1; i <= 5; ++i,k=0) {
            for (int s = 1; s <=5-i; ++s) {
                System.out.print("  ");
            }

            while (k != 2 * i - 1) {
                System.out.print("* ");
                ++k;
            }
            System.out.println();
        }
    }
}
