import java.util.*;

// return all combinations of subsequence that has sum as k

class Main{
    public static void subsequences(int[] arr, List<Integer> sub, int sum, int idx, int k, List<List<Integer>> allsub){
        System.out.println(sub + " " + sum + " " + idx);
        if(sum == k){
            allsub.add(new ArrayList<>(sub));
            System.out.println("Found - " + sub);
            return;
        }
        if(idx > arr.length - 1) return;
        if (sum + arr[idx] > k) return;

        sub.add(arr[idx]);
        sum += arr[idx];
        subsequences(arr, sub, sum, idx, k, allsub);
        sub.remove(sub.size() - 1);
        sum -= arr[idx];
        subsequences(arr, sub, sum, idx + 1, k, allsub);
    }  

    public static void main(String args[]){
        int[] arr = {2,3,5};
        Arrays.sort(arr);
        List<Integer> sub = new ArrayList<>();
        List<List<Integer>> allsub = new ArrayList<>();
        int k = 8;

        subsequences(arr,sub,0,0,k,allsub);

        System.out.println(allsub);
    }
}