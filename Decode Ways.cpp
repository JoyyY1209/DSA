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
int dp[110];
class Solution {
public:
    int numDecodings(string s) {
        n=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,s);
    }

    int solve(int i,string& s)
    {
        if(dp[i]!=-1) return dp[i];
        if(s[i]=='0') return 0;
        if(i>=n || i==n-1) return 1;
        
        int prob = solve(i+1,s);
        int val = s[i] - '0';
        val*=10;
        val+=s[i+1] - '0';
        if(val<=26)
        prob += solve(i+2,s);

        return dp[i] = prob;
    }
};       

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    cout<<s.numDecodings("12123");
}