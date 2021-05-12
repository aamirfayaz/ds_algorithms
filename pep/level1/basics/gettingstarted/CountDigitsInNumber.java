import java.util.Scanner;

public class CountDigitsInNumber {

  public static void main(String [] args) {

    int n = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter number:");

    if(s.hasNext())
       n = s.nextInt();

     int numOfDigits = 0;
     while(n != 0) {
       n = n / 10;
       numOfDigits++;
     }

     System.out.println(numOfDigits);

  }
}
