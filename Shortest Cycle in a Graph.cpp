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
    void bfs(vector<vector<int>>& arr,int n,int x,int &ans){
        queue<int> q;
        vector<int> visit(n,-1),par(n,-1);
        visit[x]=0;
        q.push(x);
        while(!q.empty())
        {
            int val = q.front();
            q.pop();
            // cout<<val<<" -> ";
            for(auto it : arr[val])
            {
                cout<<it<<sp;
                if(visit[it]==-1)
                {
                    visit[it] = visit[val] + 1;
                    par[it]=val;
                    q.push(it);
                }
                else if(par[val]!=it)
                {
                    // cout<<"("<<visit[val]<<"+"<<visit[it]<<"+"<<1<<"="<<visit[val]+visit[it]+1<<")"<<sp;
                    ans = min(ans,visit[val]+visit[it]+1);
                }
            }
            // el;
        }

        
    }
    
    int findShortestCycle(int n, vector<vector<int>>& edges) {

        vector<vector<int>> arr(n);

        for(auto it : edges)
        {
            arr[it[0]].push_back(it[1]);
            arr[it[1]].push_back(it[0]);
        }
        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            bfs(arr,n,i,ans);
        }
        cout<<ans;el;
        return ans==INT_MAX?-1:ans;
        
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    vector<vector<int>> edges = {
    {4,2},
    {0,1},
    {1,3},
    {3,4},
    {1,2},
    {2,0}
};
    s.findShortestCycle(5,edges);
}