//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
         bool flag=false;
        int i=0;
        if(s[0]=='-'){
            flag=true;
            i=1;
    }
     int sum=0;
        while(i<s.size()){
            if(s[i]<='9' && s[i]>='0'){
                sum=sum*10+(s[i]-'0');
            }
            else{
                return -1;
            }
            i++;
        }
        if(flag==true){
            return sum*-1;
        }
        else{
            return sum;
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends