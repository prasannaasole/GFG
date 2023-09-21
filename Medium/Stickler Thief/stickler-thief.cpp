//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:

    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int m = n;
        if (m == 0) {
        return 0;
    }

    if (m == 1) {
        return arr[0]; 
    }

    vector<int> dpn(m, 0); 

    dpn[0] = arr[0]; 
    dpn[1] = max(arr[0], arr[1]); 

    for (int i = 2; i < m; i++) {
     
        dpn[i] = max(dpn[i - 1], dpn[i - 2] + arr[i]);
    }

    return dpn[m - 1]; 
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends