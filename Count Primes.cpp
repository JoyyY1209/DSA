#include <bits/stdc++.h>
#define ff first
#define ss second
#define el cout << endl;
#define ck           \
    cout << "here?"; \
    el;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define all(x) x.begin(), x.end()
// #define ans cout<<"ans   ";
#define sp " "
#define mod(a, b) (((a) % (b)) + (b)) % (b)
#define chad(x, y) ((x + y - 1) / y)
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const double PI = 3.1415926535;
// const int inf = 1e18;
const int mod = 1000000007;
const int fact_mod = 998244353;
const int N = (5 * 1e6);
typedef long long ll;
using namespace std;

int prime[N];

class Solution
{
public:
    int count(vector<int>& a,int x)
    {
        int l=0,r=a.size();
        while (l+1<r)
        {
            int mid=l+(r-l)/2;
            if(a[mid]<=x) l=mid;
            else r=mid;
        }

        return l+1;
        
    }
    int countPrimes(int n)
    {
        if(n==0 || n==1) return 0;
        memset(prime, -1, sizeof(prime));
        vector<int> primes;
        for (int i = 3; i <= N; i++)
        {
            if (prime[i-1] == -1)
            {
                prime[i-1] = 1;
                primes.push_back(i);
                for (int j = i + i; j <= N; j += i)
                {
                    prime[j-1] = 0;
                }
            }
        }
        

        return count(primes,n)-prime[n-1];
    }
};

int main()
{
    Solution s;
    vector<int> a = {-1, 0, 1, 2, -1, -4};
    cout<<s.countPrimes(154242);
}