import java.util.Scanner;
import java.io.*;

public class RotateArray {

  public static void display(int[] a){
    StringBuilder sb = new StringBuilder();

    for(int val: a){
      sb.append(val + " ");
    }
    System.out.println(sb);
  }

  public static void reverse(int[] a, int start, int end){
    
      while(start < end) {
         
         int temp = a[start];
         a[start] = a[end];
         a[end] = temp;
         start++;
         end--;
      }

  }

  public static void rotate(int[] a, int n, int k){

    k = k % n; // if k = -4, n = 5 then k = -1
    if(k < 0) k = k + n;
    
     reverse(a, 0,  n - k - 1);
     reverse(a, n - k, n - 1);
     reverse(a, 0, n - 1);
    

  }

public static void rotateWithJugglingAlgorithm(){ }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }    

    int k = Integer.parseInt(br.readLine());

    rotate(a, a.length, k);
    display(a);
 }

}