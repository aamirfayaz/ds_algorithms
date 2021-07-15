package pep.level1.basics.TwoDArrays;
import java.util.Scanner;

public class StateOfWakanda1 {
    
    public static void main(String [] args) {
        Scanner in = new Scanner(System.in);
        int r = in.nextInt();
        int c = in.nextInt();

        int [][] a = new int[r][c];
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                a[i][j] = in.nextInt();
            }
        }

        for(int i=0;i<r;i++) {
            if(i%2==0) {
                for(int k=0;k<r;k++) {
                    System.out.println(a[k][i]);
                }
            } else {
                for(int k=r-1;k>=0;k--) {
                    System.out.println(a[k][i]);
                }
            }
        }
    }
}
