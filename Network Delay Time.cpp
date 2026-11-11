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

void djkstra(vector<vector<pair<int,int>>>& graph,vector<long long>& dis,int x){
    dis[x]=0;
    priority_queue<int> q;
    q.push(x);
    while(!q.empty()){
        int val = q.top();
        q.pop();
        for(int i=0;i<graph[val].size();i++)
        {
            if(dis[graph[val][i].ff]>dis[val]+graph[val][i].ss){
                dis[graph[val][i].ff]=dis[val]+graph[val][i].ss;
                q.push(graph[val][i].ff);
            }
        }
    }
}

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int,int>>> graph(n+1);
    for(auto it : times)
    {
        graph[it[0]].push_back({it[1],it[2]});
    }   
    // for(auto it : graph) {for(auto jt : it) cout<<jt.ff<<sp;el;}
        vector<long long> dis(n+1,LONG_LONG_MAX);
        djkstra(graph,dis,k);
        ll ans = 0;
        for(int i=1;i<=n;i++) ans = max(ans,dis[i]);
    cout<<ans;el;
        if(ans==LONG_LONG_MAX) return -1;
        return ans;
    }
};
        

int main()
{
    Solution s;
    vector<vector<int>> a={
        {2,1,1},{2,3,1},{3,4,1}
    };
    s.networkDelayTime(a,4,2);
}