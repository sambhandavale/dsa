import java.util.*;

class Main{
    public static int binarySearch(int[] arr, int low, int high, int target){
        if(low > high) return -1;

        int mid = (high + low) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        } else{
            low = mid + 1;
        }

        return binarySearch(arr, low, high, target);
    }

    public static void main(String args[]){
        int[] arr = {1,2,3,4,5,6};
        System.out.println(binarySearch(arr,0,arr.length-1,5));
    }
}