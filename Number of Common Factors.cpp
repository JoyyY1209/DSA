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
    int commonFactors(int a, int b) {
        if(a>=b) swap(a,b);
        int ans = 0;
        for(int i=1;(long long)(i*i)<=min(a,b);i++)
        {
            // cout<<i<<sp;
            if(!(a%i) && !(b%i))
            {
                // cout<<i<<sp;
                ans++;
                if(!(a%(a/i)) && !(b%(a/i)) && i!=a/i) ans++;
                
            }
            else if(!(a%(a/i)) && !(b%(a/i)) && i!=a/i) ans++;
        }
        // el;cout<<ans;el;
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    s.commonFactors(850,442);
}