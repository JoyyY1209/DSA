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

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n);

        dp[0] = 1;

        for(int i=1;i<n;i++)
        {
            dp[i] = dp[i-1] + ((i-2)>=0?dp[i-2]:1);
        }

        cout<<dp[n-1];el;

        return dp[n-1];
    }
};       

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
}