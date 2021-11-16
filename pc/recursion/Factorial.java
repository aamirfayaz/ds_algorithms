import java.util.*;

public class Factorial {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int result = factorial(n);
        System.out.println(result);
 }

        public static int factorial(int n) {
            
            if(n == 1) return 1;
            else {
                return n * factorial(n - 1);
            }
        }


}