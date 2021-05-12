import java.util.Scanner;

public class PrintDigitsOfNumber {

  public static void main(String [] args) {


    int n = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter number:");
    if(s.hasNext())
       n = s.nextInt();

       //print left to right
    //print(n);
    //right to left
    while(n != 0) {
      System.out.println(n % 10);
      n = n / 10;
    }
  }

  public static void print(int n) {
    if(n == 0) return;
    else {
      int rem = n % 10;
      print(n / 10);
      System.out.println(rem);
    }
  }
}
