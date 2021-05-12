import java.util.Scanner;
import java.lang.Math;
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

    for(int num = low; num <= high; num++){
        int div = 2;
        while(div * div <= num){
            if(num % div == 0){
                break;
            }
            div++;
        }

        if(div * div > num){
            System.out.println(num);
        }
    }
  }
}
