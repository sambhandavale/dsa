import java.util.*;

class Main{
    public static void allCombinations(int[] arr, List<Integer> comb, int k, int idx, List<List<Integer>> result){
        if(comb.size() == k || idx == arr.length){
            if(comb.size() == k) result.add(new ArrayList<>(comb));
            return;
        }
        comb.add(arr[idx]);
        allCombinations(arr, comb, k, idx+1, result);
        comb.remove(comb.size() - 1);
        allCombinations(arr, comb, k, idx + 1, result);
    }

    public static void main(String args[]){
        int[] arr = {1,2,3,4};
        int k = 2;
        List<Integer> comb = new ArrayList<>();
        List<List<Integer>> result = new ArrayList<>();
        allCombinations(arr,comb,k,0, result);
        System.out.println(result);
    }
}