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
vector<int> arr = {1,2,3,4,5};
int n = arr.size();

class Solution {
public:
    int gcd(int a,int b)
    {
        if(b<a) swap(a,b);
        while(b!=0)
        {
            int r = a;
            a=b;
            b=r%b;
        }

        return a;
    }
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0];
        bool ans = false;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            g = gcd(g,nums[i]);
            if(g==1)
            {
                ans = true;
                break;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> a={12,5,7,23};
    cout<<(s.isGoodArray(a)?"true":"false");
}