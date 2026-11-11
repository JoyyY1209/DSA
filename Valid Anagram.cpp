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
    bool isAnagram(string s, string t) {
        vector<ll> a(26,0);
        for(int i = 0;i<s.size();i++)
        {
            a[s[i]-97]++;
        }
        for(int i=0;i<t.size();i++)
        {
            a[t[i]-97]--;
        }
        bool ans = true;
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)
            
        }
        for(auto it : a)
        if(it!=0) ans=false;

        return ans;
    }
};


int main()
{
    Solution s;
    vector<int> a={1,2,3,0,0,0},b={2,5,6};
    // cout<<'a'+0;el;
    cout<<(s.isAnagram("rat","car")?"true":"false");
}