import java.util.Scanner;

public class BasePower {

  public static void main(String [] args) {

    int base, power, accum = 1;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter a base:");
    base = s.nextInt();
    System.out.println("Enter a power:");
    power = s.nextInt();

    while(power > 0) {
      accum = base * accum;
      power = power - 1;
    }

    System.out.println(accum);
  }
}
