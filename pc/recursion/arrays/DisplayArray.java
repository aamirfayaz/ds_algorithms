import java.util.Scanner;

public class DisplayArray {

	public static void main(String [] args) {

		Scanner sc = new Scanner(System.in);
		
		int [] a = new int[5];

		for(int i=0; i<a.length;i++) {
			a[i] = sc.nextInt();
		}
		System.out.println("-------display-------");
		display(a, 0);
		System.out.println("-------reverse display 1-------");
		reverseDisplay1(a, a.length - 1);
		System.out.println("-------reverse display 2-------");
		reverseDisplay2(a, 0);
	}

		public static void display(int [] a, int idx) {
			if(idx == a.length) return; else {
				System.out.println(a[idx]);
				display(a, idx + 1);
			}
		}

		public static void reverseDisplay1(int [] a, int idx) {

			if(idx < 0) return; else {
				System.out.println(a[idx]);
				reverseDisplay1(a, idx - 1);
			}
		}

		public static void reverseDisplay2(int [] a, int idx) {
			if(idx == a.length) return; else {
				reverseDisplay2(a, idx + 1);
				System.out.println(a[idx]);
			}
		}
	
}