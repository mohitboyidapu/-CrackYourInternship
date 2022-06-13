class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp = triangle;
        
        for(int i=n-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                // cout<<dp[i][j]<<" ";
                dp[i][j] += min(dp[i+1][j], dp[i+1][j+1]);
            }
            cout<<endl;
        }
        return dp[0][0];
    }
};