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

/*

3 2 1 6 2

0 3 5 6 12 14


*/
void solve(){
    long long t,x,y,z,i,j;
    cin>>t;
    //t=1;
    map<string,ll> m;
    while(t--)
    {
        long long i,j,n,l,r;
        cin>>x;
        if(x==1)
        {
            string str;
            cin>>str>>y;
            m[str]+=y;
        }
        else if(x==2)
        {
            string str;
            cin>>str;
            m[str]=0;
        }
        else if(x==3)
        {
            string str;
            cin>>str;
            cout<<m[str];el;
        }
        
        
        
    }
    

}
int main()
{
    solve();


}
