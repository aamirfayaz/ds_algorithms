import java.util.Scanner;

/**
Sample Output
				*
			*
		*
	*
*
**/
public class Pattern8 {

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

  static void solution2(int n) {
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n; j++) {
        if(i + j == n + 1) {
          System.out.print("*");
        } else {
          System.out.print("\t");
        }
      }
      System.out.println();
    }
  }
}
