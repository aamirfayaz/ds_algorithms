import java.util.Scanner;
public class PrimeFactors {

   public static void main(String [] args) {
     int n = 0;
     Scanner s = new Scanner(System.in);
     System.out.println("Enter n:");
     if(s.hasNext())
     n = s.nextInt();

     for(int div = 2; div <= n; div++) {
       while(n % div == 0) {
         System.out.print(div + " ");
         n = n / div;
       }
     }
   }
}
