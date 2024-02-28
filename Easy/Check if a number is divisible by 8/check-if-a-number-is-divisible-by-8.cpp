//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        if(s.length()<4)
        {
            int n = stoi(s);
            if(n%8 == 0)
            {
                return 1;
            }
            
           else {
                return -1;
            }
        }
        
        
        else{
           
           string str;
         int n = 0;
           for(int i = s.length() - 3; s[i]!= '\0'; i ++)
           {
               str[n] = s[i];
               n++;
              
           }
           int number = stoi(str);
           if(number %8 == 0)
           {
               return 1;
           }
           else{
               return -1;
           }
            
            
            
            
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends