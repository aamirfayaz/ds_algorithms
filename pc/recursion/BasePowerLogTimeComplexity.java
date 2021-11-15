import java.util.Scanner;

public class BasePowerLogTimeComplexity {

	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		
		int base = sc.nextInt();
		int power = sc.nextInt();

		int result = calculate(base, power);
		System.out.println(result);

	}

	public static int calculate(int base, int power) {

		if(power == 1) return base; 
		else {
			int basePower = calculate(base, power / 2);
			int result = basePower * basePower;

			if(power % 2 != 0) {
				result = base * result;
			} 
			return result;
		}

	}
}