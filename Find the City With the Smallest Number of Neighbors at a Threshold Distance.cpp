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
    int src(vector<vector<pair<int,int>>>& graph,vector<ll>& dis,int x,int th){
        priority_queue<int> q;
        dis[x]=0;
        q.push(x);
        while (!q.empty())
        {
            int val = q.top();
            q.pop();

            for(int i=0;i<graph[val].size();i++)
            {
                if(dis[graph[val][i].ff]>dis[val]+graph[val][i].ss)
                {
                    dis[graph[val][i].ff]=dis[val]+graph[val][i].ss;
                    q.push(graph[val][i].ff);
                }
            }
        }

        int ans=0;
        for(auto it : dis) cout<<it<<sp;el;
        for(auto it : dis) if(it!=th+1) ans++;
        cout<<ans-1;el;
        return ans-1;
        
    }
 class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>> graph(n);

        for(auto it : edges){
            graph[it[0]].push_back({it[1],it[2]});
            graph[it[1]].push_back({it[0],it[2]});
        }

        int ans = INT_MAX;
        int ind;
        for(int i=0;i<n;i++)
        {
            vector<ll> dis(n,distanceThreshold+1);
            // ans = min(ans,src(graph,dis,i,distanceThreshold));
            int val = src(graph,dis,i,distanceThreshold);
            if(ans>=val)
            {
                ind = i;
                ans = val;
            }
        }

        return ind;
    }
};       

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
}