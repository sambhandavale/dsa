import java.util.*;

class Main{
    public static int maxElement(int[] arr, int i){
        if(i == 0) return arr[i];

        int max = maxElement(arr, i-1);

        return Math.max(max,arr[i]);
    }

    public static void main(String args[]){
        int[] arr = {2,3,1};
        int max = maxElement(arr,arr.length - 1);
        System.out.println(max);
    }
}