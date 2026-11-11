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

class Solution {
public:

    bool valid(int x,int y,int n,int m)
    {
        return x>=0 &&x<n && y>=0 && y<m;
    }
    void dfs(vector<vector<char>>& grid,vector<vector<int>>& visited,int x,int y)
    {
        int n=grid.size();
        int m = grid[0].size();
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,1,-1};
        for(int i=0;i<4;i++)
        {
            int l= x+dx[i], r=y+dy[i];
            if(valid(l,r,n,m) && grid[l][r]=='1' && !visited[l][r])
            {
                visited[l][r]=1;
                dfs(grid,visited,l,r);
                
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && !visited[i][j])
                {
                    visited[i][j]=1;
                    dfs(grid,visited,i,j);
                    
                    ans++;
                }
            }
        } 
        
        cout<<ans;el;
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,0,1,2,-1,-4};
    vector<vector<char>> grid = {
    {'1','1','1','1','0'},
    {'1','1','0','1','0'},
    {'1','1','0','0','0'},
    {'0','0','0','0','0'}
    };
    s.numIslands(grid);
}