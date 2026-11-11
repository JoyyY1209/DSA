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
int n,m;
int dp[1010][1010];
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        
        n= text1.size();
        m= text2.size();

        return solve(0,0,text1,text2);
        
    }

    int solve(int i,int j,string text1,string text2)
    {
        if(dp[i][j] != -1 )return dp[i][j];

        if(i>=n || j>=m) return 0;

        int len =0;
        if(text1[i]==text2[j])
        {
            len = 1 + solve(i+1,j+1,text1,text2);
        }
            len = max({len,solve(i,j+1,text1,text2),solve(i+1,j,text1,text2)});

        return dp[i][j] = len;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    cout<<s.longestCommonSubsequence("abcde","ace");
}