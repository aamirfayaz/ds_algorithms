import java.util.Scanner;

public class CuriousCaseOfBenjaminBulbs {

   public static void main(String [] args) {

     int n = 0;
     Scanner s = new Scanner(System.in);
     System.out.println("Enter n:");
     if(s.hasNext())
     n = s.nextInt();

     System.out.println("====results=====");

     // solution1(n);


   for(int i = 1; i * i <=n; i++) {
    System.out.println(i*i);                                      
  }

   }


  static void solution1(int n) {
    for(int i = 1; i <= n; i++) {
      if(perfectSquareCheck(i)) {
        System.out.println(i);
      }
    }
  }
   static boolean perfectSquareCheck(int num) {
      if(num > 0) {
        int squareRoot = floorSqrt(num);
        return ((squareRoot * squareRoot) == num);
      } else return false;
   }

   static int floorSqrt(int num) {
    if(num == 0 || num == 1) return num;

      int i = 1, result = 1;
      while(result <= num) {
        i +=1;
        result = i * i;
      }
      return i - 1;
   }
}
