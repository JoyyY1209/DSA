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
    long long lcm(ll a ,ll b)
    {
        return (a*b)/__gcd(a,b);
    }
    long long src(int a,int b,int c,int x)
    {
        if(a==b && b==c) b=0,c=0;
        else if(b==c) c=0;
        long long l=0,r=1e18;
        
        while(l+1<r)
        {
            ll mid = l+(r-l)/2;
            ll cnt = (mid/a) + ((0==b)?0:(mid/b)) + ((0==c)?0:(mid/c)) - ((0==b)?0:(mid/lcm(a,b))) - ((0==c)?0:(mid/lcm(b,c))) - ((0==c)?0:(mid/lcm(a,c))) + ((b==a || c==0)?0:(mid/lcm(a,lcm(b,c))));
            if(cnt>=x) r=mid;
            else l=mid;
        }

        return r;
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        if(a>=b) swap(a,b);
        if(b>=c) swap(b,c);
        if(a>=b) swap(a,c);
        long long val = src(a,b,c,n);
        cout<<val;el;
        return val;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    s.nthUglyNumber(1000000000,2,217983653,336916467);  
}