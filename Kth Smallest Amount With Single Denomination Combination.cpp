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
vector<int> arr = {1,2,3,4,5};
int n = arr.size();

class Solution {
public:

    long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}
    long long count(vector<int>& arr,ll x)
    {
        
        long long cnt = 0;
        
        // cout<<cnt<<sp;el;
        ll n = arr.size();
        long long comb = (1<<n)-1;
        // cout<<comb;el;
        for(int i=1;i<=comb;i++)
        {
            
            long long lcmm = 1;
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j)) {
                    // cout<<arr[j]<<sp;
                    lcmm = lcm(lcmm,arr[j]);}
            }
            // el;
            if(__builtin_popcount(i)&1) {
                // cout<<"bits"<<sp<<__builtin_popcount(i)<<sp<<lcmm;el;
                cnt+=x/lcmm;}
            else {
                // cout<<"bits"<<sp<<__builtin_popcount(i)<<sp<<lcmm;el;
                cnt-=x/lcmm;}
                // cout<<cnt;el;
        }
        // cout<<x<<sp<<cnt;el;el;
        return cnt;
    }

    long long findKthSmallest(vector<int>& coins, int k) {
        
        long long maxi = 0;
        for(auto it : coins){
            maxi = max((long long)maxi,(ll)it);
        }
        
        long long l = 0,r=(maxi*2*1e9) + maxi;
        // cout<<l<<sp<<r;el;
// ck;
        while(l+1<r)
        {
            long long mid = l+(r-l)/2;
            long long val = count(coins,mid);
            // cout<<mid<<sp<<val<<sp<<l<<sp<<r;el;
            if(val>=k) r=mid;
            else l=mid;
            
        }
        // el;
        cout<<r;el;
        return r;
    }
};

int main()
{
    Solution s;
    vector<int> a={3,8,7};
    s.findKthSmallest(a,6);
}