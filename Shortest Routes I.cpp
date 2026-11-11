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
const long long inf = 1e18;
const int mod = 1000000007;
const int fact_mod = 998244353;

typedef long long ll;
using namespace std;

void solve()
{
    int n,x,t,i,j;
    t=1;
    // cin>>t;
    while(t--)
    {
        int m;
        cin>>n>>m;
        int y,c;

        vector<vector<pair<int,int>>> graph(n+1);
        for(i=0;i<m;i++)
        {
            cin>>x>>y>>c;
            graph[x].push_back({y,c});
            // graph[y].push_back({x,c});
        }

        vector<ll> dis(n+1,inf);
        vector<int> vis(n+1,0);

        priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> q;
        q.push({0,1});
        dis[1]=0;

        while (!q.empty())
        {
            int val = q.top().second;
            q.pop();
            if(vis[val]) continue;
            vis[val] = 1;

            for(i=0;i<graph[val].size();i++)
            {
                if(dis[graph[val][i].ff]>dis[val] + graph[val][i].ss)
                {
                    dis[graph[val][i].ff]=dis[val] + graph[val][i].ss;
                    q.push({dis[graph[val][i].ff],graph[val][i].ff});
                }
            }
        }

        for(i=1;i<=n;i++) cout<<dis[i]<<sp;el;
        
    }
}



int main()
{
    solve();
}