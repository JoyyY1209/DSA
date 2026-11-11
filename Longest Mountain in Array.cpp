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
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        int cnt = 0;
        for(int i=1;i<n-1;i++)
        {
            cnt=0;
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                // cout<<arr[i];el;
                int j = i-1;
                while (j>=0 && arr[j]<arr[j+1])
                {
                    // cout<<arr[j]<<sp;
                    cnt++;
                    j--;
                }
                // el;
                i++;
                while(i<n && arr[i]<arr[i-1])
                {
                    // cout<<arr[i]<<sp;
                    cnt++;
                    i++;
                }
                i--;
                // el;
                cnt++;

                ans = max(cnt,ans);
                
            }
        }
        cout<<ans;el;
        return ans;
        
    }
};

int main()
{
    Solution s;
    vector<int> a={11,13,2,7,6,4};
    s.longestMountain(a);
}