import java.util.Scanner;
import java.io.*;

public class ReverseArray {

  public static void display(int[] a){
    StringBuilder sb = new StringBuilder();

    for(int val: a){
      sb.append(val + " ");
    }
    System.out.println(sb);
  }

  public static void reverse(int[] a, int start, int end){
    
      while(start < end) {
         
         int temp = a[li];
         a[li] = a[ui];
         a[ui] = temp;
         start++;
         end--;
      }

  }

  public static void rotate(int[] a, int k){
    
     reverse()
    

  }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }    

    int k = Integer.parseInt(br)

    rotate(a);
    display(a);
 }

}