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
const int N = (1e6);

class Solution {
public:
    long long poww(int num,int p)
    {
        long long  ans = 1;
        while(p!=0)
        {
        if(p&1)
        {
            ans*=num;
        }
        num*=num;
        p/=2;
        }

        return ans;
    }
    long long sieve(int x)
    {
    int prime[N+1];
    memset(prime, -1, sizeof(prime));
    vector<int> primes;
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] == -1)
        {
            prime[i] = 1;
            primes.push_back(i);
            for (int j = i + i; j <= N; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    vector<pair<int,int>> divCnt;
    int i=0;
    int cnt =0;
    while(x!=1)
    {
        if(x%primes[i]==0)
        {
            cnt++;
            x=x/primes[i];
        }
        else 
        {
            if(cnt>0)divCnt.push_back({primes[i],cnt});
            i++;
            cnt=0;
        }
    }
    if(cnt>0) divCnt.push_back({primes[i],cnt});

    ll ans =1;

    for(auto it : divCnt)
    {
        ans*=(poww(it.ff,it.ss+1)-1)/(it.ff-1);
        // cout<<it.ff<<sp<<it.ss;el;
    }
    
    return ans;

    }

    bool checkPerfectNumber(int num) {
        ll sum = sieve(num);
        // cout<<sum-num;el;
        return sum-num==num;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    cout<<s.checkPerfectNumber(86243);
    // cout<<s.poww(2,3);
}