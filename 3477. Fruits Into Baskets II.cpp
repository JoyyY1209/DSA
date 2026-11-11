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
const int N = 1e5;

typedef long long ll;
using namespace std;

int arr[N+10];
int store_val[4*N+10];
int fill[N+10];
stack<int> s;
class Solution {
public:

    void build(vector<int>& baskets,int node,int l , int r){

        if(l==r) {
            store_val[node] = baskets[l];
            return;
        }

        int mid = l + (r-l)/2;
        int right_child = 2*(node+1);
        int left_child = right_child - 1;
        // cout<<node<<sp<<l<<sp<<mid<<sp<<r;el;
        build(baskets,left_child,l,mid);
        build(baskets,right_child,mid+1,r);
        store_val[node] = max(store_val[left_child],store_val[right_child]); 
        
    }

    void reorder(int node)
    {
        while(node!=0)
        {
            node = (node-1)/2;
            int right_child = 2 * (node+1);
            int left_child = right_child -1;
            store_val[node] = max(store_val[left_child],store_val[right_child]);
        }
        
    }

    bool find(vector<int> baskets,int x,int node,int l,int r)
    {
        if(l==r){
            if(baskets[l]>=x) {
                store_val[node] = -1;
                reorder(node);
                return true;
            }
            else return false;
        }
        int mid = l + (r-l)/2;
        int right_child = 2*(node+1);
        int left_child = right_child - 1;
        if(store_val[left_child]>=x && find(baskets,x,left_child,l,mid)) return true;
        if(store_val[right_child]>=x && find(baskets,x,right_child,mid+1,r)) return true;

        return false;

    }

    
    
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        int n = baskets.size();
        build(baskets,0,0,n-1);

        // for(int i=0;i<20;i++)cout<<store_val[i]<<sp;el;
        int cnt = 0;
        for(auto it : fruits)
        {
            if(find(baskets,it,0,0,n-1))
            {
                cnt++;
            }
            
        }

        cout<<fruits.size() - cnt;el;

        return fruits.size() - cnt;
    }
};        

int main()
{
    Solution s;
    vector<int> a={4,2,5},basket={3,5,4};

    s.numOfUnplacedFruits(a,basket);
    
}