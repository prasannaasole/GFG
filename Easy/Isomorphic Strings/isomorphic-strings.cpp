//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
          unordered_map<char,char>mp;
        unordered_set<char>st;
        int i=0,j=0;
        int n1=str1.size(),n2=str2.size();
        if(n1 > n2 || n1<n2)
        {
            return 0;
        }
        while(i<n1 && j<n2)
        {
            if(mp.find(str1[i]) != mp.end())
            {
                
                if(mp[str1[i]] == str2[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                if(st.find(str2[j]) != st.end())
                {
                    return 0;
                }
                mp[str1[i]]=str2[j];
                st.insert(str2[j]);
                i++;
                j++;
            }
        }
        return 1;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends