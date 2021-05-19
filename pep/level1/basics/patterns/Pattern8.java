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
