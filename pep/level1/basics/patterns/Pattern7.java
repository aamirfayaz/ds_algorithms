/**

*
	*
		*
			*
				*


**/
import java.util.Scanner;

public class Pattern7 {

    public static void main(String [] args) {

      int n = 0;
      Scanner s = new Scanner(System.in);
       if(s.hasNext())
      n = s.nextInt();
      //solution1(n);
      solution2(n);


  }
  static void solution1(int n) {

          for(int i = 1; i <= n; i++) {

             for(int j = i - 1; j > 0; j--) {
                System.out.print("\t");
             }
             System.out.print("*");
             System.out.println();

          }
  }
  static void solution2(int n) {

    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n; j++) {
        if(i == j) {
          System.out.print("*");
        } else {
          System.out.print("\t");
        }
      }
      System.out.println();
    }
  }
}
