public class ReverseArray {

  public static void main(String [] args) {

     //int [] arr = {5, 4, 3, 2, 1};
     int arr[] = {1, 2, 3, 4, 5, 6};
     printArray(arr);
     //reverseArray(arr);
     recursiveReverse(arr, 0, arr.length - 1);
     printArray(arr);
  }

  public static void recursiveReverse(int [] arr, int start , int end) {
    int temp;

    if(start >= end) return;

    else {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        recursiveReverse(arr, start + 1, end - 1);
    }
  }

  public static void reverseArray(int [] arr) {
     int start = 0;
     int end = arr.length - 1;
     int temp;

     while(start < end) {
       temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--;
     }
  }

  static void printArray(int [] arr) {
    for(int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
  }

}
