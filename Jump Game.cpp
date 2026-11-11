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
int dp[10010];
class Solution {
public:
    bool canJump(vector<int>& nums) {
        n = nums.size();
        memset(dp,-1,sizeof(dp));

        return solve(0,nums);
    }

    bool solve(int i,vector<int>& nums)
    {
        if(dp[i]!=-1) return dp[i];
        if(i==n-1) return true;
        if(nums[i]==0) return false;
        int val = nums[i];
        bool ans = false;
        int j = min(1,nums[i]);
        while(j<=val && i+j<n)
        {
            ans = ans || solve(i+j,nums); 
            if(ans) break;
            j++;
        }

        return dp[i] = ans;
    }
};

int main()
{
    Solution s;
    vector<int> a={3,2,1,0,4};
    cout<<s.canJump(a);
}