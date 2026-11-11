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
const int inf = 1e9;
const int mod = 1000000007;
const int fact_mod = 998244353;

typedef long long ll;
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        vector<int> dp_zero(n+1,inf),dp_one(n+1,inf);

        // dp_zero[0] = 0;

        // for(int i=1;i<n;i++)
        // {
        //     dp_zero[i] = min({dp_zero[i],cost[i]+dp_zero[i-1],cost[i]+(i-2>=0?dp_zero[i-2]:0)});
        // }
        // dp_zero[n] = min(dp_zero[n-1],dp_zero[n-2]); 

        dp_one[0] = cost[0];
        
        for(int i=1;i<n;i++)
        {
            dp_one[i] = min({dp_one[i],cost[i]+dp_one[i-1],cost[i]+(i-2>=0?dp_one[i-2]:0)});
        }
        dp_one[n] = min(dp_one[n-1],dp_one[n-2]); 



        // for(auto it : dp_zero) cout<<it<<sp;el;
        for(auto it : dp_one) cout<<it<<sp;el;
        // cout<<min(dp_zero[n-1],dp_one[n-1]);

        // return min(dp_zero[n],dp_one[n]);
        return dp_one[n];


    }
};       

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
}