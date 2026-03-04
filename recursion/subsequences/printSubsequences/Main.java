import java.util.*;

class Main {
    public static void subsequence(int i, int n, int[] arr, ArrayList<Integer> sub, int[] count, int target){
        if(i >= n){
            System.out.println(sub);
            return;
        }
        sub.add(arr[i]);
        subsequence(i+1, n, arr, sub, count);
        sub.remove(sub.size() - 1);
        subsequence(i+1, n, arr, sub, count);
    }
    
    public static void main(String[] args) {
        int n = 4;
        int[] arr = {3,1,4,9};
        int[] count = {0};
        ArrayList<Integer> sub = new ArrayList<>();
        subsequence(0, n, arr, sub, count);
        System.out.println(count[0]);
    }
}