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
int dp[110];
int n;
class Solution {
public:
    int rob(vector<int>& nums) {
        n = nums.size();
        memset(dp,-1,sizeof(dp));  
        
        return calculate(0,nums);
    }

    int calculate(int i,vector<int>& nums)
    {
        if(dp[i]!=-1) return dp[i];

        if(i>=n) return 0;

       return dp[i] = max(calculate(i+1,nums),nums[i] + calculate(i+2,nums));

    }
};

int main()
{
    Solution s;
    vector<int> a={6,15,5,9};
    cout<<s.rob(a);
}