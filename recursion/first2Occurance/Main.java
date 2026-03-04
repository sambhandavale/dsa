import java.util.*;

class Main{
    public static void firstTwoOccurance(int[] arr, int target, ArrayList<Integer> occ, int i){
        if(i == arr.length || occ.size() == 2) return;

        if(arr[i] == target) occ.add(i);

        firstTwoOccurance(arr,target,occ,i+1);
    }

    public static void lastTwoOccurance(int[] arr, int target, ArrayList<Integer> occ, int i){
        if(i < 0 || occ.size() == 2) return;

        if(arr[i] == target) occ.add(i);

        lastTwoOccurance(arr,target,occ,i-1);
    }

    public static void main(String args[]){
        int[] arr = {1,2,3,2,5,6,2};
        int n = arr.length;
        ArrayList<Integer> occ = new ArrayList<>();
        lastTwoOccurance(arr,2,occ,n-1);
        System.out.println(occ);
    }
}