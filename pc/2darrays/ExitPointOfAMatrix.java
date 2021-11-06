import java.util.Scanner;

public class ExitPointOfAMatrix {

	 public static void main(String [] args) {

     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int arr [][] = new int[n][n];

     for(int i=0;i<arr.length;i++) {
        for(int j=0;j<arr[0].length;j++) {
            arr[i][j] = sc.nextInt();
        }
     }
    
    calculateExitPoint(arr);

 }

 //dir = 0 east, 1 south, 2 west, 3  north
 public static void calculateExitPoint(int [] [] a) {

    int dir = 0, i = 0, j = 0;

    while(true) {

      dir = (dir + a[i][j]) % 4;
      if(dir == 0) j++;
      else if(dir == 1) i++;
      else if(dir == 2) j--;
      else if(dir == 3) i--;

      if(i < 0) {
      	i++;
      	break;
      } else if(j < 0) {
      	j++;
      	break;
      } else if(i == a.length) {
      	i--;
      	break;
      } else if(j == a.length) {
      	j--;
      	break;
      }

    }

    System.out.println(i + " " + j);
 }
}