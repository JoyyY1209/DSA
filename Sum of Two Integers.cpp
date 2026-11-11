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
vector<ll> arr(200,0);
class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        int ans = 0;
        for(int i=0;i<5;i++)
        {
            ans += ((a&(1<<i)) ^ (b&(1<<i)))  ^ carry;
            
            if(((a&(1<<i)) ^ (b&(1<<i))) && carry)
            carry = carry;
            else carry =((a&(1<<i)) & (b&(1<<i)));
            carry = carry<<1;

            // cout<<((a&(1<<i)) ^ (b&(1<<i)))<<sp<<carry<<sp<<ans;;el;

        }
        // el;cout<<ans;el;
        return ans;
    }
};
/*
    1 0 1
    0 1 1
*/
int main()
{
    Solution s;
    vector<int> arr = {2,2,3,2};
    cout<<s.getSum(1,3);
}