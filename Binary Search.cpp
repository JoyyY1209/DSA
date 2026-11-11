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


/*

1 2 3 4 5 6 7

1 -> 2 3
2-> 4(1),5(1) + 1
3-> 6(1),7(1) + 1

*/
vector<int> arr = {1,2,3,4,5};
int n = arr.size();

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0,r=nums.size();
        while(l+1<r)
        {
            int mid = l+(r-l)/2;

            if(nums[mid]>=target)
            r=mid;
            else
            l=mid;
        }

        return nums[r]!=target?-1:r;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,3,5,9,12};
    cout<<s.search(a,9);
}