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

  public static void reverse(int[] a){
    

      int li = 0, ui = a.length - 1;
      while(li < ui) {
         
         int temp = a[li];
         a[li] = a[ui];
         a[ui] = temp;
        li++;
        ui--;
      }

  }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }    

    reverse(a);
    display(a);
 }

}