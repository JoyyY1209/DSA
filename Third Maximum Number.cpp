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
    int thirdMax(vector<int>& nums) {
        long long a=LONG_LONG_MIN,b=LONG_LONG_MIN,c=LONG_LONG_MIN,cnt=0;;
        for(int i = 0; i<nums.size();i++)
        {
            if(nums[i]>a)
            {   cnt++;
                c=b;
                b=a;
                a=nums[i];
            }
            else if(nums[i]>b && nums[i]<a)
            {   cnt++;
                c=b;
                b=nums[i];
            }
            else if (nums[i]>c && nums[i]<b)
            {   cnt++;
                c=nums[i];
            }
        }
        return (cnt<3)?a:c;
    }
};
int main()
{
    Solution s;
    vector<int> arr={5,INT_MIN,2};
    cout<<s.thirdMax(arr);
}