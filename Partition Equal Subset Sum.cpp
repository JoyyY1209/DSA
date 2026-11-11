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

int dp[200][20010];
int totalSum=0;
int n;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        n=nums.size();
        totalSum=0;
        for(auto it : nums) totalSum+=it;

        return solve(0,0,nums);
    }

    bool solve(int i,int sumA,vector<int>& nums)
    {
        if(dp[i][sumA]!=-1) return dp[i][sumA];
        if(totalSum-sumA==sumA) return dp[i][sumA] = 1;
        if(i>=n || totalSum-sumA<sumA) return false;

        return dp[i][sumA] = solve(i+1,sumA+nums[i],nums) || solve(i+1,sumA,nums);
    }
};
int main()
{
    Solution s;
    vector<int> a={1,1,1};
    cout<<s.canPartition(a);
}