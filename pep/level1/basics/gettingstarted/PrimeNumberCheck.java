import java.util.Scanner;

public class PrimeNumberCheck {
  public static void main(String [] args) {

    Scanner sc = new Scanner(System.in);
    int t = 0, n  = 0;


     System.out.println("Enter number of test cases:");
     if(sc.hasNext())
      t = sc.nextInt();

     while(t > 0) {

        System.out.println("Enter a number");
        if(sc.hasNext())
         n = sc.nextInt();
        boolean isPrime = true;

        for(int div = 2 ; div * div <= n; div++) {
          if(n % div == 0) {
            isPrime = false;
            break;
        }
      }

      if(isPrime) System.out.println("prime");
      else System.out.println("not prime");

         t--;
     }
  }
}
