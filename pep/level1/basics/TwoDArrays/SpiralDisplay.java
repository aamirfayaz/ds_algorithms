package pep.level1.basics.TwoDArrays;
import java.util.Scanner;

public class SpiralDisplay {
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
        
        int minc = 0;
        int minr = 0;
        int maxr = r - 1;
        int maxc = c - 1;
        int count = 0;
        int totalElements = r * c;
    
        while(true) {
            
            for(int i=minr,j=minc;i<=maxr && count < totalElements;i++) {
                System.out.println(a[i][j]);
                count++;
            }
            minc++;

            for(int i=maxr,j=minc;j<=maxc && count < totalElements;j++) {
                System.out.println(a[i][j]);
                count++;
            }
            maxr--;

            for(int i=maxr,j=maxc;i>=minr && count < totalElements;i--) {
                System.out.println(a[i][j]);
                count++;
            }
            maxc--;

            for(int i=minr,j=maxc;j>=minc && count < totalElements;j--) {
                System.out.println(a[i][j]);
                count++;
            }
            minr++;

            if(count >= totalElements) {
                break;
            }
        }
    }
}
