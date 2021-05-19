/**
*				*
	*		*
		*
	*		*
*				*
**/
import java.util.Scanner;
public class Pattern9 {

   public static void main(String [] args) {

     int n = 0;
     Scanner s = new Scanner(System.in);
      if(s.hasNext())
     n = s.nextInt();

     solution1(n);
 }
     static void solution1(int n) {

       for(int i = 1; i <= n; i++) {
         for(int j = 1; j <= n; j++) {

          // System.out.println("i = " + i);
          // System.out.println("j = " + j);
          //
          // System.out.println("i + j == n + 1" + (i + j == n + 1));
          // System.out.println("i == j" + (i == j));

           if(i == j || (i + j == n + 1)) {
             System.out.print("*");
           } else {
               System.out.print("  ");
             }

       }
       System.out.println();

     }

}
}
