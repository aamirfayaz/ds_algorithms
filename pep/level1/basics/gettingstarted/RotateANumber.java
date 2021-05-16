import java.util.Scanner;

public class RotateANumber {

  public static void main(String [] args) {
    int n = 0, k = 0;
    Scanner s = new Scanner(System.in);
    System.out.println("Enter number:");
    if(s.hasNext())
       n = s.nextInt();
    System.out.println("Enter rotation freq:");
       if(s.hasNext())
          k = s.nextInt();

    //int acc = method1(n, k);
    int acc = pepCodeSol(n, k);
    System.out.println(acc);

  }

  static int pepCodeSol(int n, int k) {

     int temp = n, nod = 0;
     while(temp != 0) {
       nod += 1;
       temp /= 10;
     }
     k = k % nod;
     if (k < 0) k = nod + k;

     int div = 1, mul = 1;
     for(int i = 1; i <= nod; i++) {
       if(i <= k) {
         div *= 10;
       } else {
         mul *= 10;
       }
     }


     int rem = n % div;
     int quo = n / div;

     int acc = (rem * mul) + quo;
     return acc;
  }

  static int method1(int n, int k) {


    int pow = 0, acc = 0;
    int numLength = length(n);
    if(k > numLength) k = k % numLength;
    if(k < 0) k = numLength - abs(k);

    while(k > 0) {
      int rem = n % 10;
      acc += rem * Math.pow(10, pow);
      n = n / 10;
      pow = pow + 1;
      k = k - 1;
    }

    if(n > 0) {
      int pending = (int) Math.pow(10, length(n));
      acc = n + (acc * pending);
    }
    return acc;
  }
  static int length(int num) {
    int count = 0;
    while(num > 0) {
      count = count + 1;
      num = num / 10;
    }
    return count;
  }
  static int abs(int num) {
    if(num > 0) return num; else return -num;
  }
}
