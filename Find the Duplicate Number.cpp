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
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow=nums[0],fast=nums[0];

//         do
//         {
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//             cout<<slow<<sp<<fast;el;
//         }
//         while(slow!=fast);
//         cout<<slow;el;
//         slow=nums[0];
        
//         while(slow!=fast)
//         {
//             slow = nums[slow];
//             fast = nums[fast];
//             cout<<slow<<sp<<fast;el;
//         }
//         return slow;
//     }
// };

class Solution{
    public :
        int findDuplicate(vector<int>& nums){
            int ans = 0;
            int a=0,b=0;
            for(int i=0;i<32;i++)
            {
                a=0,b=0;
                for(auto it : nums)
                {
                    if((1<<i) & it)
                    {
                        a++;
                    }
                }
                for(int j=1;j<nums.size();j++)
                {
                    if((1<<i) & j)
                    {
                        b++;
                    }
                }
                if(a>b) ans+=(1<<i);
            }

            return ans;
        }
};


int main()
{
    Solution s;
    vector<int> arr = {2,2,3,4,1,5};
    cout<<s.findDuplicate(arr);
}