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

     int n = 0;
     Scanner s = new Scanner(System.in);
      if(s.hasNext())
     n = s.nextInt();

     int sp = n / 2; int st = 1;

     for(int i = 1; i <= n; i++) {

       System.out.println(sp);
       System.out.println(st);

       int tempSp = sp;
       int tempSt = st;


       while(tempSp > 0) {
         System.out.print("\t");
         tempSp -= 1;
       }
       while(tempSt > 0) {
          System.out.print("*" + "\t");
          tempSt -= 1;
       }

       if(sp + st == n) {
         sp += 1;
         st -= 2;
       } else {
         sp += 1;
         st += 2;
       }



      System.out.println();
    }
   }
}
