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
int dp[510][510];
class Solution {
public:
    int minDistance(string word1, string word2) {
        n=word1.size(),m=word2.size();
        memset(dp,-1,sizeof(dp));
        return calculate(0,0,word1,word2);
    }
    int calculate(int i,int j,string& word1,string& word2)
    {
        if(i==n) return m-j;
        if(j==m) return n-i;
        if(dp[i][j]!=-1) return dp[i][j];

        int cost = 0;
        if(word1[i]==word2[j]) cost = calculate(i+1,j+1,word1,word2);
        else
        cost = 1 + min({calculate(i+1,j,word1,word2),calculate(i+1,j+1,word1,word2),calculate(i,j+1,word1,word2)});
        return dp[i][j] = cost;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    cout<<s.minDistance("horse","ros");
}