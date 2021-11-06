import java.io.*;
import java.util.*;

public class PrintIncreasingDecreasingNumbers {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        print(n);
    }

    public static void print(int n){
        if(n == 0) return;
        else {
            System.out.println(n);
            print(n - 1);
            System.out.println(n);
        }
    }

}