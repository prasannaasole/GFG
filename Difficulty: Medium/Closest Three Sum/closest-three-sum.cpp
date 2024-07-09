//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        long long int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<arr.size()-2;i++){
            int k=i+1;
            int j=arr.size()-1;
            while(k<j){
                long long int sum=arr[i]+arr[j]+arr[k];
                if(abs(target-sum)==0){
                    return sum;
                }
                if(sum>target){
                    j--;
                    if(abs(target-sum)<diff){
                    diff=abs(target-sum);
                    ans=sum;
                }
                if(abs(target-sum)==diff){
                    if(sum>ans){
                        ans=sum;
                    }
                }
                }
                else{
                    k++;
                    if(abs(target-sum)<diff){
                    diff=abs(target-sum);
                    ans=sum;
                }
                if(abs(target-sum)==diff){
                    if(sum>ans){
                        ans=sum;
                    }
                }
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends