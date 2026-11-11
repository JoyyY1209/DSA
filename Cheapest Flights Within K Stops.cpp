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
const long long inf = 1e16;
const int mod = 1000000007;
const int fact_mod = 998244353;

typedef long long ll;
using namespace std;

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<vector<pair<int,int>>> graph(n);

        for(auto it : flights)
        {
            graph[it[0]].push_back({it[1],it[2]});
        }

        vector<pair<long long,long long>> dis(n,{inf,inf});
        queue<tuple<int,int,int>> q;
        q.push({0,src,0});
        dis[src].ff=0;
        dis[src].ss=0;

        while (!q.empty())
        {
            auto a = q.front();
            q.pop();
            // cout<<get<1>(a)<<" -> ";
            for(auto it : graph[get<1>(a)])
            {
                // cout<<it.ff<<sp;
                if(get<0>(a)+1<=k+1)
                if(dis[it.ff].ss>get<0>(a)+1 || (dis[it.ff].ss<=get<0>(a)+1  && dis[it.ff].ff>get<2>(a)+it.ss))
                {
                    
                    dis[it.ff].ff = get<2>(a)+it.ss;
                    dis[it.ff].ss = get<0>(a)+1;
                    q.push({dis[it.ff].ss,it.ff,dis[it.ff].ff});
                }
                // el;
            }
            // for(auto it : dis)cout<<it.ff<<sp<<it.ss<<endl;el;
        }

        cout<<dis[dst].ff;el;
        

        return dis[dst].ff==inf?-1:dis[dst].ff;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> a = {
    {0,1,100},
    {1,2,100},
    {2,0,100},
    {1,3,600},
    {2,3,200}
};
s.findCheapestPrice(4,a,0,3,1);
}