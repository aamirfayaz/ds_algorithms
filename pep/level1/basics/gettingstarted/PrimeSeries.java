import java.util.Scanner;

public class PrimeSeries {
  public static void main(String [] args) {

    int low = 0, high = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter lower range:");

    if(s.hasNext())
      low = s.nextInt();
    System.out.println("Enter higher range:");
    if(s.hasNext())
      high = s.nextInt();

    while(low <= high) {

      boolean isPrime = true;

      for(int i = 2 ; i <= low / 2; i++) {
        if(low % i == 0) {
          isPrime = false;
          break;
      }
    }

    if(isPrime) System.out.println(low);

      low++;
    }
  }
}
