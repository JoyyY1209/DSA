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
int dp[110][110];
int x,y;
class Solution {
public:
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        x=m,y=n;
         int ans = calculate(0,0);
         cout<<ans;el;
        return ans;
    }

    int calculate(int i,int j)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==x-1 && j==y-1) return 1;

        return dp[i][j] = (valid(i+1,j)?calculate(i+1,j):0) + (valid(i,j+1)?calculate(i,j+1):0);
    }
    bool valid(int i,int j)
    {
        return i<x && i>=0 && j>=0 && j<y;
    }
};    

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    s.uniquePaths(3,2);
}