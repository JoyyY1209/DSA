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
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size();
        while(l+1<r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]>=nums[l] && target<nums[l]) l=mid;
            else if(nums[mid]<=nums[l] && target>=nums[l]) r=mid;
            else if(nums[mid]>=nums[l])
            {
                if(nums[mid]<=target) l=mid;
                else r=mid;
            }
            else
            {
                if(nums[mid]<=target) l=mid;
                else r=mid;
            }
            // cout<<l<<sp<<r<<sp<<nums[mid];el;
        }
        return nums[l]==target?l:-1;
    }
};
vector<int> arr = {1,2,3,4,5};
int n = arr.size();



int main()
{
    Solution s;
    vector<int> a={2,1};
    cout<<s.search(a,1);
}