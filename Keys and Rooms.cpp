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

int cnt = 0;
class Solution {
public:
    void dfs(vector<vector<int>>& rooms,vector<int>& visited,int x)
    {
        int m = rooms[x].size();
        for(int i=0;i<m;i++)
        {
            if(!visited[rooms[x][i]])
            {
                // cout<<rooms[x][i]<<sp;
                cnt++;
                visited[rooms[x][i]]=1;
                dfs(rooms,visited,rooms[x][i]);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        cnt=0;
        int n = rooms.size();
        vector<int> visited(n,0);
        visited[0]=1;
        cnt++;
        dfs(rooms,visited,0);

        cout<<cnt;el;
        return cnt == n;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> graph = {
    {1},{1}
    };
    s.canVisitAllRooms(graph);
}