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
const int inf = 1e16;
const int mod = 1000000007;
const int fact_mod = 998244353;

typedef long long ll;
using namespace std;

class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        vector<vector<pair<int,int>>> graph(n);

        ll mx = 0;
        for(auto it : edges)
        {
            graph[it[0]].push_back({it[1],it[2]});
            graph[it[1]].push_back({it[0],it[2]});
            mx+=it[2];
        }


        vector<ll> dis(n,inf);
        dis[0] = 0;


        // priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> q;
        priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> q;

        q.push({0,0});

        // set<int> s;
        // s.insert(0);
        while (!q.empty())
        {
            int val = q.top().ss;
            q.pop();

            for(int i=0;i<graph[val].size();i++)
            {
                if(dis[graph[val][i].ff]>dis[val] + graph[val][i].ss+1)
                {
                    
                    dis[graph[val][i].ff]=dis[val] + graph[val][i].ss+1;
                    q.push({dis[graph[val][i].ff],graph[val][i].ff});
                }
            }
        }
        ll ans = 0;
         for(auto it : dis)if(it<=maxMoves) ans++;


         vector<ll> can_go(n);

         for(int i=0;i<n;i++)
         {
            can_go[i] = max((ll)0,maxMoves-dis[i]);
         }

         for(auto it : can_go) cout<<it<<sp;el;
       
        for(auto it : edges)
        {
            ans+=can_go[it[0]]+can_go[it[1]]-max((ll)0,can_go[it[0]]+can_go[it[1]]-it[2]);
        }

        cout<<ans;el;

        return ans;
    }
};        

int main()
{
    Solution s;
    vector<vector<int>> a = {
    {2,4,2},
    {3,4,5},
    {2,3,1},
    {0,2,1},
    {0,3,5}
};
    s.reachableNodes(a,14,5);
}