#include<bits/stdc++.h>
#define ff first
#define ss second
#define el cout<<endl;
#define ck cout<<"here?";el;
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
//#define ans cout<<"ans   ";
#define sp " "
#define mod(a, b)   (((a) % (b)) + (b)) % (b)
#define chad(x,y)   ((x+y-1)/y)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = 3.1415926535;
//const int inf = 1e18;
const int mod = 1000000007;
const int fact_mod = 998244353;

typedef long long ll;
using namespace std;
int n;
int ans = 0;
int t;
int dp[30][2020];
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        for(int i = 0;i<30;i++)
        {
            for(int j=0;j<2010;j++)
            dp[i][j] = INT_MAX;
        } 
        n=nums.size();
        t=target;
        return solve(0,0,nums);
    }

    int solve(int i,int sum,vector<int>& nums)
    {
        if(i==n && sum==t) return 1;
        if(i==n) return 0;

        if(dp[i][1010+sum]!=INT_MAX) return dp[i][1010+sum];

        return dp[i][1010+sum] = solve(i+1,sum+nums[i],nums) + solve(i+1,sum-nums[i],nums);


    }
};

int main()
{
    Solution s;
    vector<int> a={1,1,1,1,1};

    cout<<s.findTargetSumWays(a,3);
}