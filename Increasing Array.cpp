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
    //cin>>t;
    t=1;
    while(t--)
    {
        long long i,j,n,l,r;
        cin>>n;
        vector<ll> arr(n);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll cnt =0;
        for(i=1;i<n;i++)
        {
            if(arr[i]<arr[i-1])
            {cnt+=arr[i-1]-arr[i];
            arr[i]+=arr[i-1]-arr[i];
            }
        }
        cout<<cnt;el;
    }
    

}
int main()
{
    solve();


}
