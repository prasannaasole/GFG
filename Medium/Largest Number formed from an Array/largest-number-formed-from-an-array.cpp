//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	 static bool custom_compare(string &a , string &b)
	{
              // concanating and comparing string for ex .a = "10",b="43"   1043 > 4310 ? false 

	    if((a + b) >(b + a)) 
	    {
	        return true;
	    }
	    return false;
	}
	string printLargest(int n, vector<string> &arr) {
	    // code here
	      string s="" ;
	    
	    sort(arr.begin(),arr.end(),custom_compare);
	    
	    for(auto i : arr)
	    {
	        s = s + i ;
	       
	    }
	    
	  return s;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends