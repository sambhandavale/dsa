import java.util.*;

class Main{
    public static void generateParen(ArrayList<String> arr, int n, int op, int cl){
        if(arr.size() == n * 2){
            System.out.println("Found - " + arr);
            return;
        }
        if(op < n){
            arr.add("(");
            generateParen(arr, n, op+1, cl);
            arr.remove(arr.size() - 1);
        }
        if(cl < op){
            arr.add(")");
            generateParen(arr, n, op, cl+1);
            arr.remove(arr.size() - 1);
        }
    }

    public static void main(String args[]){
        int n = 2;
        ArrayList<String> str = new ArrayList<>();
        generateParen(str, n, 0 ,0);
    }
}

// class Main{
//     public static void generateParen(String str, int n, int op, int cl, List<String> ans){
//         if(str.length() == n * 2){
//             System.out.println("Found - " + str);
//             ans.add(str);
//             return;
//         }
//         if(op < n){
//             generateParen(str + "(", n, op+1, cl, ans);
//         }
//         if(cl < op){
//             generateParen(str + ")", n, op, cl+1, ans);
//         }
//     }

//     public static void main(String args[]){
//         int n = 2;
//         String str = "";
//         List<String> ans = new ArrayList<>();
//         generateParen(str, n, 0 ,0, ans);
//         System.out.println(ans);
//     }
// }

// import java.util.*;

// class Main {
//     public static void generateParen(int n, int open, int close, String current) {
//         if (current.length() == 2 * n) {
//             System.out.println(current);
//             return;
//         }

//         if (open < n) {
//             generateParen(n, open + 1, close, current + "(");
//         }

//         if (close < open) {
//             generateParen(n, open, close + 1, current + ")");
//         }
//     }

//     public static void main(String args[]) {
//         int n = 2;
//         generateParen(n, 0, 0, "");
//     }
// }