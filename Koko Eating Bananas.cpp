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

class Solution {
public:
    long long cntHours(vector<int>& a,long long x)
    {
        long long ans = 0;
        for(auto it : a) ans+=(it+x-1)/x;
        // cout<<x<<sp<<ans;el;
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=0,r=INT_MAX;
        long long total = 0;
        // cout<<total;el;
        while (l+1<r)
        {
            long long mid=l+(r-l)/2;
            if(cntHours(piles,mid)<=h) r=mid;
            else l=mid;
        }
        return r;
    }
};


int main()
{
    Solution s;
    vector<int> a={805306368,805306368,805306368};
    cout<<s.minEatingSpeed(a,1000000000);
}