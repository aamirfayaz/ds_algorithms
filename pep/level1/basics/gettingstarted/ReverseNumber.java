import java.util.Scanner;

public class ReverseNumber {

  public static void main(String [] args) {

    int n = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter number:");
    if(s.hasNext())
       n = s.nextInt();

  int rev = 1;
  int sum = 0;

    while(n != 0) {
      int rem = n % 10;
      sum = rem + (sum * 10);
      n = n / 10;
    }

  System.out.println(sum);

  }
}
