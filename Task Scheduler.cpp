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

3 2 1 6 2

0 3 5 6 12 14


*/
class Solution {
public:
    


    int leastInterval(vector<char>& tasks, int n) {
        
        map<char,ll> m;
        for(auto it : tasks)
        {
            m[it]++;
        }
        priority_queue<ll> pq;
        for(auto it : m)
        pq.push(it.second);

        ll ans =0;
        while(!pq.empty())
        {
            vector<ll> temp;
            ll tot = 0;
            for(int i=1;i<=n+1;i++)
            {
                if(!pq.empty())
                {
                    ll cur = pq.top();
                    pq.pop();
                    if(cur>1)
                    {
                        temp.push_back(cur-1);
                    }
                    tot++;
                }

            }
            for(auto it : temp)
            {
                pq.push(it);
            }

            if(!pq.empty())
            {
                ans+=n+1;
            }
            else
            ans+=tot;
        }

        cout<<ans;el;
        return ans;
    }
};

int main()
{
    vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    Solution a;
    a.leastInterval(tasks,2);
}
