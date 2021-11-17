import java.util.Scanner;

public class MaxElementInArray {

	public static void main(String [] args) {

		Scanner sc = new Scanner(System.in);
		
		int [] a = new int[5];


		for(int i=0; i<a.length;i++) {
			a[i] = sc.nextInt();
		}

		int result = max(a, 0);
		System.out.println(result);
	}

  public static int max(int [] a, int idx) {
  	if(idx == a.length)
  		return Integer.MIN_VALUE;
  	else {

  		int res = max(a, idx + 1);
  		if(a[idx] > res)
  			return a[idx];
  		else
  			return res;
  	}
  }	
}