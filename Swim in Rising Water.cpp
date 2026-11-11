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
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n==1) return grid[0][0];
        vector<vector<int>> graph(n*n);
        
        for(int i=1;i<n-1;i++)
        {
            graph[grid[0][i]].push_back(grid[1][i]);
            graph[grid[0][i]].push_back(grid[0][i-1]);
            graph[grid[0][i]].push_back(grid[0][i+1]);
        }

        for(int i=1;i<n-1;i++)
        {
            graph[grid[n-1][i]].push_back(grid[n-2][i]);
            graph[grid[n-1][i]].push_back(grid[n-1][i-1]);
            graph[grid[n-1][i]].push_back(grid[n-1][i+1]);
        }

        for(int i=1;i<n-1;i++)
        {
            graph[grid[i][0]].push_back(grid[i][1]);
            graph[grid[i][0]].push_back(grid[i-1][0]);
            graph[grid[i][0]].push_back(grid[i+1][0]);
        }

        for(int i=1;i<n-1;i++)
        {
            graph[grid[i][n-1]].push_back(grid[i][n-2]);
            graph[grid[i][n-1]].push_back(grid[i-1][n-1]);
            graph[grid[i][n-1]].push_back(grid[i+1][n-1]);
        }
        graph[grid[0][0]].push_back(grid[0][1]);
        graph[grid[0][0]].push_back(grid[1][0]);

        graph[grid[0][n-1]].push_back(grid[0][n-2]);
        graph[grid[0][n-1]].push_back(grid[1][n-1]);

        graph[grid[n-1][0]].push_back(grid[n-1][1]);
        graph[grid[n-1][0]].push_back(grid[n-2][0]);
        
        graph[grid[n-1][n-1]].push_back(grid[n-2][n-1]);
        graph[grid[n-1][n-1]].push_back(grid[n-1][n-2]);

        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                graph[grid[i][j]].push_back(grid[i][j+1]);
                graph[grid[i][j]].push_back(grid[i][j-1]);
                graph[grid[i][j]].push_back(grid[i+1][j]);
                graph[grid[i][j]].push_back(grid[i-1][j]);
            }
        }

        // for(auto it : graph){for(auto jt : it)cout<<jt<<sp;el;}

        vector<int> t(n*n,n*n);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({grid[0][0],grid[0][0]});
        t[grid[0][0]] = grid[0][0];
        int time = t[grid[0][0]];
        while (!q.empty())
        {
            int x=q.top().first;
            int val=q.top().second;
            q.pop();
            for(int i=0;i<graph[val].size();i++)
            {
                if(t[graph[val][i]]>max(t[val],graph[val][i]))
                {
                    t[graph[val][i]]=max(t[val],graph[val][i]);
                    q.push({t[graph[val][i]],graph[val][i]});
                }
            }
        }

        // for(auto it : t)cout<<it<<sp;el;
        cout<<t[grid[n-1][n-1]];el;

        return t[grid[n-1][n-1]];
        
    }
};        

int main()
{
    Solution s;
    vector<vector<int>> a={
        {0,2,4},{3,1,8},{7,5,6}
    };
    s.swimInWater(a);
}