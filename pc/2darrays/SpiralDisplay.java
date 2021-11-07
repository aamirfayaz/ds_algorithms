import java.util.Scanner;

public class SpiralDisplay {

	public static void main(String [] args) {

	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    int m = sc.nextInt();

	    int [][]a = new int[n][m];

	    for(int i=0;i<a.length;i++) {
	    	for(int j=0;j<a[i].length;j++) {
	    		a[i][j] = sc.nextInt();
	    	}
	    }	

	    int totalElements = n * m;
	    int count = 0;
	    int left = 0, top = 0;
	    int bottom = a.length - 1, right = a[0].length - 1;

	    display(a);
	    System.out.println("----------------------------");
	    while(true) {

	    		if(count < totalElements) {

	    			for(int i = top, j = left; i <= bottom && count < totalElements; i++) {
	    				System.out.print(a[i][j] + " ");
	    				count++;
	    			}

	    			System.out.println();
	    			left++;

	    			for(int i = bottom, j = left; j <= right && count < totalElements; j++) {
	    				System.out.print(a[i][j] + " ");
	    				count++;
	    			}

	    			System.out.println();
	    			bottom--;

	    			for(int i = bottom, j = right; i >= top && count < totalElements; i--) {
	    				System.out.print(a[i][j] + " ");
	    				count++;
	    			}

	    			System.out.println();
	    			right--;

	    			for(int i = top, j = right; j >= left && count < totalElements; j--) {
	    				System.out.print(a[i][j] + " ");
	    				count++;
	    			}

	    			System.out.println();
	    			top++;

	    		} else {
	    			break;
	    		}
	    		
	    }
	}



	public static void display(int [] [] a) {
		
		for(int i=0;i<a.length;i++) {
			for(int j=0;j<a[i].length;j++) {
				System.out.print(a[i][j] + " ");
			}
			System.out.println();
		}
	}
}