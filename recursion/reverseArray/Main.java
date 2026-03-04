import java.util.*;

class Main{
    public static void reverseArray(int[] arr, int i){
        if(i == arr.length / 2) return;

        int n = arr.length;
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;

        reverseArray(arr, i+1);
    }
    public static void main(String args[]){
        int[] arr = {1,2,3,4};
        reverseArray(arr,0);
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }
}