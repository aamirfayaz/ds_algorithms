import java.util.Scanner;

public class PythagoreanTriplet {

    public static void main(String [] args) {
      int a = 0, b = 0, c = 0;
      Scanner s = new Scanner(System.in);
      System.out.println("Enter a:");
      if(s.hasNext())
         a = s.nextInt();
      System.out.println("Enter b:");
         if(s.hasNext())
         b = s.nextInt();
      System.out.println("Enter b:");
         if(s.hasNext())
         c = s.nextInt();

      int max = a;
      if(b > max) max = b;
      if(c > max) max = c;

      if(a == max) {
        System.out.println((a * a) == ((b * b) + (c * c)));
      } else if(b == max) {
        System.out.println((b * b) == ((a * a) + (c * c)));
      } else {
        System.out.println((c * c) == ((a * a) + (b * b)));
      }
  }
}
