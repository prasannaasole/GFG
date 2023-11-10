//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
         int n = S.size();
        string ans;
        char i = '1';
        while(ans.size() <= S.size()){
            ans.push_back(i++);
        }
        for(int j = 0 ; j<n ; j++){
            if(S[j] == 'D'){
                int start = j;
                while( j<n && S[j] == 'D')j++;
                // cout<<start<<" "<<j<<endl;
                reverse(ans.begin()+start,ans.begin()+j+1);
            }
        }
        return ans;
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
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends