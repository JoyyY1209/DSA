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
    int dominantIndex(vector<int>& nums) {
        long long a=LONG_LONG_MIN,b=LONG_LONG_MIN;

        int n=nums.size(),ind=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>a)
            {
                b=a;
                ind=i;
                a=nums[i];
            }
            else if(nums[i]>b)
            {
                b=nums[i];
            }
        }

        if(b*2<=a)
        {
            return ind;
        }
        else
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> a={1,2},b={1,1,2,6};
    cout<<s.dominantIndex(b);
}