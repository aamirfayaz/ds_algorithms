import java.util.Scanner;
/**
        *
      *	*
   *	*	*
  *	*	*	*
*	*	*	*	*
**/
public class Pattern3 {

  public static void main(String [] args) {
    int n = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter n:");
    if(s.hasNext())
    n = s.nextInt();

    for(int i = 1; i <= n; i++) {
           int sp = n - i;
          while(sp > 0) {
            System.out.print("\t");
            sp = sp - 1;
          }
          for(int j = i ; j > 0; j--) {
             System.out.print("*" + "\t");
          }
         System.out.println();
      }
  }
}
