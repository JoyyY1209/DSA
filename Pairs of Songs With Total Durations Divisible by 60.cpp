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
    long long nsum(int n)
    {
        return (n*(n+1))/2;
    } 
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> v(60,0);
        int n = time.size();
        for(int i =0;i<n;i++)
        {
            v[time[i]%60]++;
        }

        long long ans =0;

        for(int i=0;i<61;i++){
            if(i==0 && v[i]>1) ans+=nsum(v[i]-1);
            else if(i==30 && v[i]>1) ans+=nsum(v[i]-1);
            else if (i!=0 && i!=30 && v[i]>0){
                int dif = 60-i;
                cout<<i<<sp<<dif;el;
                if(dif>i)ans+=v[i]*v[dif];
            }
            // if(v[i]>0)cout<<ans<<endl;
        }
        cout<<ans;el;

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> a={418,204,77,278,239,457,284,263,372,279,476,416,360,18};
    s.numPairsDivisibleBy60(a);
}