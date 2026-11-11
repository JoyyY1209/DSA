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
// #define mod(a, b)   (((a) % (b)) + (b)) % (b)
#define chad(x, y) ((x + y - 1) / y)
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const double PI = 3.1415926535;
// const int inf = 1e18;
const int mod = 1000000007;
const int fact_mod = 998244353;

typedef long long ll;
using namespace std;

class Solution
{
public:
    long long Way(long long a, long long b)
    {
        long long ans = 1;
        while (b != 0)
        {
            if (b & 1)
            {
                ans = (ans * a) % mod;
            }
            a = (a * a) % mod;
            b /= 2;
        }

        return ans;
    }

    int countGoodNumbers(long long n)
    {
        long long p = n / 2;
        long long e = n - p;

        long long pArrange = Way(4, p);
        long long eArrange = Way(5, e);

        return (pArrange * eArrange) % mod;
    }
};

int main()
{
    Solution s;
    vector<int> a = {-1, 0, 1, 2, -1, -4};
    cout<<s.countGoodNumbers(50);el;
}