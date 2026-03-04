import java.util.*;

// return count of subsequences that has sum as k

class Main{
    public static int subsequences(int[] arr, int sum, int idx, int k){
        if(idx == arr.length){
            if(sum == k) {
                return 1;
            }
            return 0;
        }

        sum += arr[idx];
        int l = subsequences(arr, sum, idx + 1, k);
        sum -= arr[idx];
        int r = subsequences(arr, sum, idx + 1, k);
        return l + r;
    }  

    public static void main(String args[]){
        int[] arr = {1,2,1};
        int k = 2;

        System.out.println(subsequences(arr,0,0,k));
    }
}