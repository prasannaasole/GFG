//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
import java.lang.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int n = Integer.parseInt(in.readLine());
            
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.recamanSequence(n);
            for(int i = 0;i < n;i++)
                System.out.print(ans.get(i)+" ");
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    static ArrayList<Integer> recamanSequence(int n){
        // code here
            int prev=0;
        int ans=0;
        int i=0;
        ArrayList<Integer> list=new ArrayList<>();
        list.add(0);
        while(i++<n)
        {
            ans=prev-i;
            if(ans<0 || list.contains(ans))
            {
                ans=prev+i;
            }
            list.add(ans);
            prev=ans;
        }
        return list;
    }
}