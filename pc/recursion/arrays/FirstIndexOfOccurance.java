import java.util.Scanner;

public class FirstIndexOfOccurance {

	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		int [] a = new int[5];

		System.out.println("Enter array elements: ");
		for(int i=0;i<a.length;i++) {
			a[i] = sc.nextInt();
		}

		System.out.println("enter element to find");
		int find = sc.nextInt();

		int result = firstIndex(a, 0, find);
		System.out.println("first index " + result);
	}

	public static int firstIndex(int a [], int idx, int find) {
		if(idx == a.length) 
			return -1; 
		else {
			if(a[idx] == find)
			 return idx;
			  else {
				return firstIndex(a, idx + 1, find);
			}
		}
	}
}