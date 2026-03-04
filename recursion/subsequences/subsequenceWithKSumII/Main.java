import java.util.*;

// return only one subsequence that has sum as k

class Main{
    public static int subsequences(int[] arr, ArrayList<Integer> sub, int sum, int idx, int k){
        if(idx == arr.length){
            if(sum == k) {
                return true;
            }
            return false;
        }

        sub.add(arr[idx]);
        sum += arr[idx];
        if(subsequences(arr, sub, sum, idx + 1, k) == true){
            return true;
        }
        sub.remove(sub.size() - 1);
        sum -= arr[idx];
        if(subsequences(arr, sub, sum, idx + 1, k) == true){
            return true;
        }
        return false;
    }  

    public static void main(String args[]){
        int[] arr = {1,2,1};
        ArrayList<Integer> sub = new ArrayList<>();
        int k = 2;

        subsequences(arr,sub,0,0,k);
    }
}