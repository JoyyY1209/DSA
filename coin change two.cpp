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

int dp[5010];
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));

        int ans = calculate(amount,coins);
        cout<<ans;el;
        return ans;
    }

    int calculate(int amount,vector<int>& coins)
    {
        if(dp[amount]!=-1) return dp[amount];

        if(amount==0) return 1;
        
        int ans = 0;
        for(auto coin : coins)
        {
            if(amount-coin>=0)
            {
                ans += calculate(amount-coin,coins);
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
}