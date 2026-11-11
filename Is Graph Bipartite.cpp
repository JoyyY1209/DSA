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

class Solution {
public:
    vector<int> cycle_len;
    void dfs(vector<vector<int>>& graph,vector<int>& visit,int x,int len,int parent){
        visit[x]=len-1;
        for(auto it : graph[x])
        {
            if(visit[it]!=-1 && it!=parent){
                // cout<<x<<sp<<it<<" len val : "<<visit[x]<<sp<<visit[it];el;
                cycle_len.push_back(abs(visit[x]-visit[it])+1);
            }
            if(visit[it]==-1)
            {
                dfs(graph,visit,it,len+1,x);

            }
        }
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        cycle_len.clear();
        vector<int> visit(n,-1);
        for(int i=0;i<n;i++)
        if(visit[i]==-1) dfs(graph,visit,i,1,0);
        bool ans = true;
        for(auto it : cycle_len) if(it&1) ans = false;
        cout<<ans;el;
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    vector<vector<int>> graph={
        {},
    {2,4,6},
    {1,4,8,9},
    {7,8},
    {1,2,8,9},
    {6,9},
    {1,5,7,8,9},
    {3,6,9},
    {2,3,4,6,9},
    {2,4,5,6,7,8}
    };
    s.isBipartite(graph);
}