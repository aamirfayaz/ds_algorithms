import java.util.Scanner;
/*
1
1	1
1	2	1
1	3	3	1
1	4	6	4	1
*/
public class Pattern13 {

   public static void main(String [] args) {

          int n = 0;
          Scanner s = new Scanner(System.in);
          System.out.println("Enter n:");
          if(s.hasNext())
          n = s.nextInt();

          for(int i = 0; i < n; i++) {
            int coff = 1;
            System.out.print(coff + "\t");
                for(int j = 0; j < i; j++) {
                   coff = (coff * (i - j)) /  (j + 1);
                   System.out.print(coff + "\t");
                }
               System.out.println();
            }

   }
}
