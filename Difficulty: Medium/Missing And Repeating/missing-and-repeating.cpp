//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]<0){
                ans.push_back(abs(arr[i]));
                continue;
            }
            arr[abs(arr[i])-1]*=-1;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0) ans.push_back(i+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends