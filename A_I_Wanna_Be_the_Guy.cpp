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

void pairsort_cmp()
{
    /*
     sort(order.begin(),order.end(),[&](pair<char,int>a,pair<char,int>b){
            return a.second<b.second;
        });



        if(order.size()>2){
            sort(order.begin()+1,order.begin()+order.size()-1,[&](pair<char,int>a,pair<char,int>b){
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first;
            });
        }

        */
}
long long  ModExponent(ll a,ll b,ll m)
{
    ll result;
    if(a==0)
        return 0;
    else if(b==0)
        return 1;
    else if(b&1)
    {
        result=a%m;
        result=result*ModExponent(a,b-1,m);
    }
    else
    {
        result=ModExponent(a,b/2,m);
        result=((result%m)*(result%m))%m;
    }
    return (result%m+m)%m;
}
long long power(ll a, ll b, ll m)
{
    ll val = 1;

    while(b > 0)
    {

        if(b & 1)   val = mod((mod(val, m) * mod(a, m)), m);

        b >>= 1;

        a = mod((mod(a, m) * mod(a, m)), m);
    }

    return val;
}

long long power(ll a, ll b)
{
    ll val = 1;

    while(b > 0)
    {

        if(b & 1)   val *= a;

        b >>= 1;

        a *= a;
    }

    return val;
}

long long pwr(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b%2==0)
        {
            a*=a;
            b/=2;
        }
        else
        {
            res*=a;
            b--;
        }
    }
    return res;
}

string BS(int arr[],int n,int x )
{
    int l=-1,r=n,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(x==arr[mid])
        {
            return "YES";
        }
        if(x<=arr[mid])
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    return "NO";

}


int LB(int arr[],int n,int x )
{
    int l=-1,r=n,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(x<=arr[mid])
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    return r;

}

int UB(int arr[],int n,int x )
{
    int l=-1,r=n,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(x<arr[mid])
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }
    return r;

}

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
ll factorial(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1) * n;
    }
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1) * n;
    }
}
long long nsum(int n)
{
    return((n*(n+ (long long)1))/ (long long)2);
}

bool area(vector<ll> v,ll mid,ll c)
{
    ll ttl=0;
    for(ll i=0; i<v.size(); i++)
    {
        ttl+=(v[i]+mid)*(v[i]+mid);
    }
    //cout<<ttl;el;

    return ttl<=c;

}
ll prime (ll a)
{
    ll i,temp=a;
    for(i=2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {

            temp=a/i;
            break;

        }
    }
    //cout<<temp;el;
    return temp;
}

vector<ll> graph[10000];
bool visit[10000];

ll dfs(ll source)   ///dfs with recursion
{
    visit[source]=true;
    for(int i=0; i<graph[source].size(); i++)
    {
        if(!visit[graph[source][i]])
        {
            dfs(graph[source][i]);
        }
    }
}

ll logba(ll a,ll b)
{
    return log10(a)/log10(b);

}
long long ok(ll a)
{
    return ((a-1)*a)/2;
}

void solve(){
    long long t,x,y,z,i,j;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long i,j,n,l,r;
        cin>>n;
        set<ll> s;
        ll p,q;
        cin>>p;
        for(i=0;i<p;i++)
        {
            cin>>x;
            s.insert(x);
        }
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>x;
            s.insert(x);
        }
        if(s.size()==n)
        {
            cout<<"I become the guy.";el;
        }
        else
        {
            cout<<"Oh, my keyboard!";el;
        }
        
    }
    

}
int main()
{
    solve();


}
