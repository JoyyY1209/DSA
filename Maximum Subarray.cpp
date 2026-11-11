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
long long dp[100005];

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        n = nums.size();
        // memset(dp,-1,sizeof(dp));
        // return calculate(0,nums);

        long long finSum=nums[0],cur_Sum=0;
        for(auto it : nums)
        {
            cur_Sum+=it;

            if(cur_Sum<it) cur_Sum = it;

            finSum = max(finSum,cur_Sum);
        }

        return finSum;
    }

    int calculate(int i,vector<int>& nums)
    {
        if(dp[i]!=-1) return dp[i];

        if(i>=n) return 0;

        return dp[i] = max(nums[i]+calculate(i+1,nums),calculate(i+1,nums));
    }

};        

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
}