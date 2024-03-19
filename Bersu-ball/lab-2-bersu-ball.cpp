#include <bits/stdc++.h>
 
using namespace std;
 
class Solution{
    public:
    int findpair(vector<vector<int>> &dp, int n,int m,vector<int>&a,vector<int>&b){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(i-1>=0&&j-1>=0)
                    dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
                if(abs(a[i]-b[j])<=1)
                    dp[i][j]++;
                if(i-1>=0)
                    dp[i][j]=max(dp[i][j],dp[i-1][j]);
                if(j-1>=0)
                    dp[i][j]=max(dp[i][j],dp[i][j-1]);
            }
        }
    return dp[n-1][m-1];


    }
};
 
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    int m;
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];

    vector<vector<int>> dp(n,vector<int>(m,0));
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    Solution sol;

    cout<<"The required maximum possible number of pairs is "<<sol.findpair(dp,n,m,a,b)<<endl;
    
    return 0;
}