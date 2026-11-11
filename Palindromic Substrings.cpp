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
int dp[1010][1010];
class Solution {
public:
    int countSubstrings(string s) {
        memset(dp,-1,sizeof(dp));

        n = s.size();
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)

            {
                cnt+=solve(i,j,s);
            }
        }

        return cnt;
    }

    int solve(int i,int j,string& s)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        if(i>=j) return 1;

        if(s[i]==s[j])
        return dp[i][j] = solve(i+1,j-1,s);

        return dp[i][j]=0;
    }

    
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    cout<<s.countSubstrings("aaa");
}