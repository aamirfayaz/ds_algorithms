package pep.level1.basics.TwoDArrays;
import java.util.Scanner;

public class MatrixMul {
    public static void main(String [] args) {
        
        System.out.println("Matrix Multiplication");

        Scanner sc = new Scanner(System.in);
       
        int r1 = sc.nextInt();
        int c1 = sc.nextInt();

        int r2 = sc.nextInt();
        int c2 = sc.nextInt();

        int [][] a1 = new int[r1][c1];
        int [][] a2 = new int[r2][c2];

        //enter first array elements
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c1;j++) {
               a1[i][j] = sc.nextInt();     
            }
        }

        //enter second array elements
        for(int i=0;i<r2;i++) {
            for(int j=0;j<c2;j++) {
               a2[i][j] = sc.nextInt();     
            }
        }

        if(c1 != r2) {
            System.out.println("Invalid input");
            return;
        }

        int [][] a3 = new int [r1][c2];

        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++) {
                for(int k=0;k<c1;k++) {
                    a3[i][j] = a3[i][j] + (a1[i][k] * a2[k][j]);
                }
            }
        }

        for(int i=0;i<a3.length;i++) {
            for(int j=0;j<a3[i].length;j++) {
                System.out.print(a3[i][j] + "\t");
            }
            System.out.println("\n");
        }

    }
}
