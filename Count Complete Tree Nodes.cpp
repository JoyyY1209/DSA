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
    int countNodes(int i) {
        if(n==0) return 0;
        int c1 = (i+1) * 2;
        int c2 = c1+1;
        // cout<<c1<<sp<<c2;el;
        if(c1-1<n && c2-1<n) return countNodes(c1-1)+countNodes(c2-1)+1;
        else if(c1-1<n) return countNodes(c1-1)+1;
        else return 1;
    }
};


int main()
{
    Solution s;
    
    cout<<s.countNodes(0);
}