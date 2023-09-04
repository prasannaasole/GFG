//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here  std::vector<int> row = {-1, 0, 1, 0};
        std::vector<int> column = {0, 1, 0, -1};
        
        // Traverse the border and mark connected 'O' cells as '1'
        for (int ij = 0; ij < n; ij++) {
            for (int ji = 0; ji < m; ji++) {
                if ((ij == 0 || ij == n - 1 || ji == 0 || ji == m - 1) && mat[ij][ji] == 'O') {
                    makeOne(ij, ji, n, m, mat);
                }
            }
        }
        
        // Replace remaining 'O's with 'X' and restore '1's to 'O'
        for (int ijj = 0; ijj < n; ijj++) {
            for (int jii = 0; jii < m; jii++) {
                if (mat[ijj][jii] == 'O') {
                    mat[ijj][jii] = 'X'; // Replace 'O' with 'X'
                } else if (mat[ijj][jii] == '1') {
                    mat[ijj][jii] = 'O'; // Restore '1' back to 'O'
                }
            }
        }
        
        return mat;
    }
    
    void makeOne(int i, int j, int n, int m, std::vector<std::vector<char>>& mat) {
        if (i < 0 || i >= n || j < 0 || j >= m || mat[i][j] != 'O') {
            return;
        }
        mat[i][j] = '1'; // Mark as visited
        std::vector<int> row = {-1, 0, 1, 0};
        std::vector<int> column = {0, 1, 0, -1};
        for (int k = 0; k < 4; k++) {
            makeOne(i + row[k], j + column[k], n, m, mat);
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends