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
    //cin>>t;
    t=1;
    
    while(t--)
    {
        long long i,j,n,l,r;
        string str,ans="";
        cin>>str;
        
        //cout<<(char)(str[0]-32);el;continue;
        // vector<ll> a(n),b;
        bool f=true;
        
        for(auto it : str)
        {
            if(f)
            {
                // cout<<(char)(it-32);el;
                ans+=(char)(it-32);
                f=false;
            }
            else if(it=='s')
            ans+='$';
            else if(it=='i')
            ans+='!';
            else if(it=='o')
            {
                ans+="()";
            }
            else
            {
                ans+=it;
            }
        }
        ans+='.';
        cout<<ans;el;
       
        
    }
    

}
int main()
{
    solve();


}
