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
    int singleNumber(vector<int>& nums) {
        int ones = 0 , twos = 0;

        for(auto it : nums)
        {
            ones = ones ^ (it&(~twos));
            twos = twos ^ (it&(~ones));
        }
        return ones;
    }
};;

int main()
{
    Solution s;
    vector<int> arr = {2,2,3,2};
    cout<<s.singleNumber(arr);
}