//{ Driver Code Starts
//Initial Template for Java



import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            String str = br.readLine().trim();

            String ans = new Solution().removeDuplicates(str);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java


class Solution {
    String removeDuplicates(String str) {
char[] arr = str.toCharArray();
StringBuilder sb = new StringBuilder();
for (char ch : arr) {
if (sb.indexOf(Character.toString(ch)) == -1) {
sb.append(ch);
   }
}
return sb.toString();
    }
}

