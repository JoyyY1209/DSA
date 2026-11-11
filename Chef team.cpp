#include<bits/stdc++.h>
#define ff first
#define ss second
#define el cout<<endl;
#define ck cout<<"here?";el;
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
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


void solve(){
    long long t,x,y,z,i,j;
    cin>>t;
    
    while(t--)
    {
        long long i,j,n,l,r;
        cin>>n;
        vector<ll> a,b;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                l = n/i;
                if(l&1)
                a.push_back(l);
                else if((l&1)==0)
                b.push_back(l);
                if(i&1)
                {
                    a.push_back(i);
                }
                else{
                    b.push_back(i);
                }
            }
        }
        //cout<<a.size()<<sp<<b.size();el;
        if(a.size()==b.size())
        {
            cout<<1;
        }
        else{
            cout<<0;
        }
        el;
    }
    

}
int main()
{
    solve();


}
