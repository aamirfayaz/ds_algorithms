import java.util.Scanner;

public class Pattern4 {
/*
*	*	*	*	*
	*	*	*	*
		*	*	*
			*	*
				*
*/
   public static void main(String [] args) {

     for(int i = 1; i <= n; i++) {
            int sp = i - 1;
           while(sp > 0) {
             System.out.print("\t");
             sp = sp - 1;
           }
           for(int j = i ; j <= n; j++) {
              System.out.print("*" + "\t");
           }
      
    }
   }
}
