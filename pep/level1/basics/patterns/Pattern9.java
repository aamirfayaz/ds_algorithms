/**

**/
import java.util.Scanner;
public class Pattern9 {

   public static void main(String [] args) {

     int n = 0;
     Scanner s = new Scanner(System.in);
      if(s.hasNext())
     n = s.nextInt();

     solution1(n);
     
     static void solution1(int n) {

       for(int i = 1; i <= n; i++) {
         for(int j = i; j <= n; j++) {
           if(j == n) {
             System.out.print("*");
           } else {
             System.out.print("\t");
           }
         }
         System.out.println();
       }

     }
   }
}
