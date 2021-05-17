 import java.util.Scanner;

public class GcdLcm {

  public static void main(String [] args) {

    int num1 = 0, num2 = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter num1:");
    if(s.hasNext())
       num1 = s.nextInt();
    System.out.println("Enter num2:");
       if(s.hasNext())
       num2 = s.nextInt();

    int a = recGCD(num1, num2);
    int b = num1 * num2 / a;

    System.out.println(a);
    System.out.println(b);

  }

  static int recGCD(int num1, int num2) {
    if(num2 == 0) return num1;
    else return recGCD(num2, num1 % num2);
  }
}
