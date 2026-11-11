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
// This is the MountainArray's API interface.
 // You should not implement it, or speculate about its implementation
  class MountainArray {
    public:
     int get(int index);
     int length();
 };
 

class Solution {
public:
    int findPeak(vector<int> &mountainArr){
        int l=0,r=mountainArr.size()-1;
        while(l+1<r)
        {
            int mid=l+(r-l)/2;
            if(mountainArr[mid]>=mountainArr[mid+1])
            {
                r=mid;
            }
            else
            l=mid;
        }
        cout<<r;el;
        return r;
    }
    int highSlope(vector<int> &mountainArr,int peak,int target)
    {
        int l=0,r=peak;
        int ans = -1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(mountainArr[mid]==target)
            {
                ans = mid;
                break;
            }
            else if(mountainArr[mid]>target)
            {
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        return ans;
    }
    int lowSlope(vector<int> &mountainArr,int peak,int target)
    {
        int l=peak,r=mountainArr.size()-1;
        int ans = -1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(mountainArr[mid]==target)
            {
                ans = mid;
                break;
            }
            else if(mountainArr[mid]>target)
            {
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

        return ans;
    }
    int findInMountainArray(int target,vector<int> &mountainArr) {
        int peak = findPeak(mountainArr);
        if(highSlope(mountainArr,peak,target)!=-1) return highSlope(mountainArr,peak,target);
        return lowSlope(mountainArr,peak,target);
    }
};

int main()
{
    Solution s;
    vector<int> a={1,2,3,4,5,3,1};
    cout<<s.findInMountainArray(2,a);
}