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
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());

        int l=0,r=0;
        int ans =INT_MIN;
        for(int i=0;i<houses.size();i++)
        {
            ans=max(ans,bins(heaters,houses[i]));
        }
        return ans;
    }

    int bins(vector<int>& a,int x)
    {
        int l=0,r=a.size()-1,mid=(l+r)/2;
        while(l+1<r)
        {
            mid=(l+r)/2;

            if(a[mid]>x) r=mid;
            else l =mid;
        }
        int rgt =a[r];
        l=0,r=a.size(),mid=(l+r)/2;
        while(l+1<r)
        {
            mid=(l+r)/2;

            if(a[mid]<=x) l=mid;
            else r =mid;
        }
        int lft=a[l];

        // cout<<lft<<sp<<rgt;el;

        return min(abs(x-rgt),abs(x-lft));
    }
    
};
int main()
{
    Solution s;
    vector<int> a={1,5,2},b={1,2};
    cout<<s.findRadius(a,b);
}