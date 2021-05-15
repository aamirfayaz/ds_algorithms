import java.util.Scanner;

public class InverseOfANumber {
  public static void main(String [] args) {

    int n = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter number:");
    if(s.hasNext())
       n = s.nextInt();


        int i = 0;
        int p = 1;
        while(n > 0){
            int dig = n % 10;
            System.out.println("dig = " + dig);
            n = n / 10;
            System.out.println("n = " + n);
            System.out.println("p = " + p);
            System.out.println("Math.pow(10, dig - 1) = " + Math.pow(10, dig - 1));
            i += p * Math.pow(10, dig - 1);
            System.out.println("i = " + i);
            System.out.println("===========iteration====");
            p++;
        }

        System.out.println(i);


  }
}
