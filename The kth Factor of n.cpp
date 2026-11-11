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
/*
24 2
12 2
6 2
3 3
1 1

1 2 3 4 6 8 12 24

2-> 3
3-> 1

0 0 1
1 0 2
2 0 4
3 0 8
0 1 3
1 1 6
2 1 12
3 1 24


*/
class Solution {
public:
    int kthFactor(int n, int k) {
        for(int i=1;i*i<n;i++)
        if(n%i==0 && --k==0) return i;

        for(int i=sqrt(n);i>=1;i--)
        if(n%(n/i)==0 && --k==0) return n/i;

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> a = {-1, 0, 1, 2, -1, -4};
    cout<<s.kthFactor(5,4);
}