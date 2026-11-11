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
bool odd = true;
    void dfs(vector<vector<int>>& grph,vector<vector<int>>& comp,vector<int>& visit,int x,int ind)
    {
        
        for(int i =0;i<grph[x].size();i++)
        {
            if(!visit[grph[x][i]]) {
                comp[ind].push_back(grph[x][i]);
                visit[grph[x][i]]=1;
                dfs(grph,comp,visit,grph[x][i],ind);
            }
        }
    }
    int bfs(vector<vector<int>>& grph,vector<int>& visit,int x,int depth){
        queue<pair<int,int>> q;
        q.push({x,depth});
        visit[x]=1;
        while (!q.empty())
        {
            int f = q.front().first;
            int s = q.front().second;
            q.pop();
            //cout<<f<<" -> ";
            for(int i=0;i<grph[f].size();i++)
            {   
                //cout<<grph[f][i]<<sp;
                if(!visit[grph[f][i]])
                {
                    visit[grph[f][i]] = 3-visit[f];
                    q.push({grph[f][i],s+1});
                }
                else if(visit[grph[f][i]] == visit[f]){
                    //cout<<grph[f][i]<<sp<<f;ck;
                    odd = true;
                    return -1;
                }
            }
            //el;
            depth = max(depth,s);
        }
        
        return depth;
    }
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> grph(n+1);
        for(int i=0;i<edges.size();i++)
        {
            grph[edges[i][0]].push_back(edges[i][1]);
            grph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<vector<int>> comp;
        vector<int> visit(n+1,0);

        int ind = 0;
        for(int i= 1;i<=n;i++)
        {
            if(!visit[i])
            {
                comp.push_back({i});
                visit[i]=1;
                dfs(grph,comp,visit,i,ind++);
            }
        }
        int ans = 0;
        for(auto it : comp) {
            
            int maxi = 1;
            for(auto jt : it){
                visit.assign(n+1,0);
                int val = bfs(grph,visit,jt,1);
                //el;
                if(val==-1) return -1;
                maxi = max(maxi,val); 
            }
            ans+=maxi;
        }


        cout<<ans;el;
       return ans ;
    }
};
        

int main()
{
    Solution s;
    vector<vector<int>> edges = {
    {1, 2},
    {1, 4},
    {1, 5},
    {2, 6},
    {2, 3},
    {4, 6}
};
    s.magnificentSets(6,edges);
}