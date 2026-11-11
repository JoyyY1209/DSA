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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=m-1,r=n-1,k=nums1.size()-1;
        while(l>=0 && r>=0)
        {
            if(nums1[l]>nums2[r]) {
                nums1[k--] = nums1[l--];
            }
            else
                nums1[k--] = nums2[r--];
        }
        while(l>=0)
        {
            nums1[k--] = nums1[l--];
        }
        while(r>=0)
        {
            nums1[k--] = nums2[r--];
        }

        for(auto it : nums1) cout<<it<<sp;el;
    }
};


int main()
{
    Solution s;
    vector<int> a={1,2,3,0,0,0},b={2,5,6};
    s.merge(a,3,b,3);
}