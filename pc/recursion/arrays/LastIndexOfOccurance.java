import java.util.Scanner;

public class LastIndexOfOccurance {

	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		int [] a = new int[5];

		System.out.println("Enter array elements: ");
		for(int i=0;i<a.length;i++) {
			a[i] = sc.nextInt();
		}

		System.out.println("enter element to find");
		int find = sc.nextInt();

		int result = lastIndex(a, 0, find);
		System.out.println("last index " + result);
	}

	public static int lastIndex(int a [], int idx, int find) {
		if(idx == a.length) 
			return -1; 
		else {
			int res = lastIndex(a, idx + 1, find);
			if(res == -1) {
				if(a[idx] == find) 
					return idx;
				else
					return -1;
			} else {
				return res;
			}
	
		}
	}
}