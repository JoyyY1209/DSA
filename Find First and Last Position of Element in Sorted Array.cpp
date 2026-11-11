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

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1,-1};
        if(nums.size()==0)
        {
            return ans;
        }
        int l=-1,r=nums.size()-1;
        while (l+1<r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>=target)
            r=mid;
            else
            l=mid;
        }

        ans[0] = (nums[r]==target)?r:-1;

         l=0,r=nums.size();
        while (l+1<r)
        {
            int mid = l+(r-l)/2;
            if(nums[mid]<=target)
            l=mid;
            else
            r=mid;
        }
        ans[1] = (nums[l]==target)?l:-1;
        return ans;
    }
};
vector<int> arr = {1,2,3,4,5};
int n = arr.size();



int main()
{
    Solution s;
    vector<int> a={5,7,7,8,8,10};
    vector<int> b= s.searchRange(a,6);
    for(auto it :b) cout<<it<<sp;el;
}