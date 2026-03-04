import java.util.*;

// return all subsequence that has sum as k

class Main{
    public static void subsequences(int[] arr, ArrayList<Integer> sub, int sum, int idx, int k){
        if(idx == arr.length){
            if(sum == k) System.out.println(sub);
            return;
        }

        sub.add(arr[idx]);
        sum += arr[idx];
        subsequences(arr, sub, sum, idx + 1, k);
        sub.remove(sub.size() - 1);
        sum -= arr[idx];
        subsequences(arr, sub, sum, idx + 1, k);
    }  

    public static void main(String args[]){
        int[] arr = {1,2,1};
        ArrayList<Integer> sub = new ArrayList<>();
        int k = 2;

        subsequences(arr,sub,0,0,k);
    }
}