import java.util.Scanner;

public class RotateArrayBy90 {

 public static void main(String [] args) {

     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int arr [][] = new int[n][n];

     //assuming square matrix
     for(int i=0;i<arr.length;i++) {
        for(int j=0;j<arr[0].length;j++) {
            arr[i][j] = sc.nextInt();
        }
     }
     transpose(arr);
     reverseRowWise(arr);

     display(arr);

 }

 public static void transpose(int [] [] arr) {

      for(int i=0;i<arr.length;i++) {
        for(int j=0;j<i;j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
      }  
 }

 public static void reverseRowWise(int [] [] arr) {

     for(int i=0;i<arr.length;i++) {
        int li=0, ui = arr[i].length - 1;
        while(li<ui) {
          int temp = arr[i][li];
          arr[i][li] = arr[i][ui];
          arr[i][ui] = temp;    
          li++;
          ui--;
        } 
     }
 }

 public static void display(int [][] arr) {

  for(int i=0;i<arr.length;i++) {
        for(int j=0;j<arr[0].length;j++) {
            System.out.print(arr[i][j] + " ");
        }
        System.out.println();
     }

 }

}