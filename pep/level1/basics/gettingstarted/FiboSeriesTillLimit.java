import java.util.Scanner;

public class FiboSeriesTillLimit {

  public static void main(String [] args) {

    int n = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter limit:");

    if(s.hasNext())
       n = s.nextInt();

      int x = 0, y = 1, z = 1;

    for(int i = 0; i < n; i++) {
      System.out.println(x);
      x = y;
      y = z;
      z = x + y;
    }
  }
}
