//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int i1=0,j1=0,i2=n-1,j2=n-1;
  int count=0;
  while(i1<n && j1<n && i2>=0 && j2>=0){
      if(mat1[i1][j1]+mat2[i2][j2]>x){
          if(j2==0){
              i2=i2-1;
              j2=n-1;
          }
          else{
              j2--;
          }
      }
      else if(mat1[i1][j1]+mat2[i2][j2]<x){
          if(j1==n-1){
              j1=0;
              i1++;
          }
          else{
              j1++;
          }
      }
      else{
          count++;
          if(j1==n-1){
              j1=0;
              i1++;
          }
          else{
              j1++;
          }
      }
  }
  return count;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends