import java.util.Scanner;

public class InverseOfANumber {
  public static void main(String [] args) {

// inverse of 2134 is 1243 and inverse of 24153 is 24153    
    int n = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter number:");
    if(s.hasNext())
       n = s.nextInt();


        int acc = 0;
        int pow = 1;
        while(n > 0){
            // System.out.println("dig = " + dig);
            // System.out.println("n = " + n);
            // System.out.println("p = " + p);
            // System.out.println("Math.pow(10, dig - 1) = " + Math.pow(10, dig - 1));
            acc += pow * Math.pow(10, (n % 10) - 1);
            // System.out.println("i = " + i);
            // System.out.println("===========iteration====");
            pow = pow + 1;
            n = n / 10;

        }

        System.out.println(acc);


  }
}
