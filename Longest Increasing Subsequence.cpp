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
int dp[3000][3010];
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(dp,-1,sizeof(dp));

        return calculte(0,-1,nums);
    }

    int calculte(int cur_i,int prev_i,vector<int>& nums)
    {
        if(dp[cur_i][prev_i+1]!=-1) return dp[cur_i][prev_i];
        if(cur_i>=n) return 0;

        int taken=0;
        int not_taken = calculte(cur_i+1,prev_i,nums);
        
        if(prev_i==-1 || nums[cur_i]>nums[prev_i])
        taken= calculte(cur_i+1,cur_i,nums) + 1;


        return dp[cur_i][prev_i+1] = max(taken,not_taken);

    }
};

int main()
{
    Solution s;
    vector<int> a={6,5,3,4};
    cout<<s.lengthOfLIS(a);
}