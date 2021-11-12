import java.util.Scanner;

public class BasePower {

    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        int base = scn.nextInt();
        int power = scn.nextInt();

        int result = calculateBasePower(base, power);
        System.out.println(result);

    }

        public static int calculateBasePower(int base, int power) {
             if(power == 0) return 1; 
             return base * calculateBasePower(base, power - 1);
        }

}