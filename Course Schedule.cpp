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

    void dfs(vector<vector<int>>& grph,vector<int>& visited,vector<int>& pathVisited,vector<int>& ans,int x,bool& res)
    {
        // cout<<"dfs of  "<<x<<":  ";
        
        for(int i=0;i<grph[x].size();i++)
        {
            if(pathVisited[grph[x][i]]==1) res=false;
            if(!visited[grph[x][i]])
            {
                visited[grph[x][i]]=1;
                pathVisited[grph[x][i]]=1;
                // cout<<grph[x][i]<<sp<<visited[grph[x][i]]<<sp;;
                
                dfs(grph,visited,pathVisited,ans,grph[x][i],res);
                pathVisited[grph[x][i]]=0;
            }
        }
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans(numCourses,0),visited(numCourses,0),pathVisited(numCourses,0);
        bool res=true;

        vector<vector<int>> grph(numCourses);

        for(int i=0;i<prerequisites.size();i++)
        {
            grph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        for(int i=0;i<numCourses;i++)
        {
            if(!visited[i])
            {
                // cout<<"i : "<<i;el;
                visited[i]=1;
                pathVisited[i]=1;
                dfs(grph,visited,pathVisited,ans,i,res);
                pathVisited[i]=0;
                //dfs
            }
        }
        
        for(auto it : visited) if(it==0) res=false;

        return res;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> p={
        {1,0},{0,1}
    };
    cout<<s.canFinish(2,p);
}