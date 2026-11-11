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
vector<int> arr = {1,2,3,4,5};
int n = arr.size();
bool ans = false;
class Solution {
public:
        
        bool dfs(vector<vector<int>>& grph,vector<int>& visited,int x,int destination)
        {
            // int n=grph.size();
            int m = grph[x].size();
            
            for(int i=0;i<m;i++)
            {
                if(grph[x][i]==destination) return true;
                if(!visited[grph[x][i]])
                {
                    visited[grph[x][i]]=1;
                    ans = dfs(grph,visited,grph[x][i],destination);
                    if(ans) break;
                }
            }
            return ans;
        }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        ans = false;
        vector<vector<int>> grph(n);
        vector<int> visited(n,0);

        for(int i=0;i<edges.size();i++)
        {
            grph[edges[i][0]].push_back(edges[i][1]);
            grph[edges[i][1]].push_back(edges[i][0]);
        }   
        visited[source] = 1;
        if(source==destination) return true;
        ans = dfs(grph,visited,source,destination);

        cout<<ans;el;
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> edges = {
    {0, 1},
    {0, 2},
    {3, 5},
    {5, 4},
    {4, 3}
    };
    s.validPath(6,edges,0,5);
}