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
    vector<int> closestDivisors(int num) {
        int x=num+1;
        int y=x+1;

        pair<int,int> p={1,x};


        for(int i=1;(ll)i*i<=x;i++)
        {
            if(!(x%i))
            {
                int l=i;
                int r=x/i;
                if(abs(l-r)<abs(p.ff-p.ss))
                {
                    p.ff=l;
                    p.ss=r;
                }
            }
        }
        for(int i=1;(ll)i*i<=y;i++)
        {
            if(!(y%i))
            {
                int l=i;
                int r=y/i;
                if(abs(l-r)<abs(p.ff-p.ss))
                {
                    p.ff=l;
                    p.ss=r;
                }
            }
        }
        vector<int> a;
        a.push_back(p.ff);
        a.push_back(p.ss);

        cout<<p.ff<<sp<<p.ss;el;

        return a;
    }
};


int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    int x;
    cin>>x;
    s.closestDivisors(x);
}