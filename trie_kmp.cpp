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

class Node
{
public:
    Node *next[26];
    bool end_mark;
    Node(){
        for(int i=0;i<26;i++)
        {
            next[i] = NULL;
        }
        end_mark = false;
    }    
};

Node *root;

void insert(string str)
{
    Node *cur = root;

    for(int i=0;i<str.size();i++)
    {
        int val = str[i] - 'a';
        if(cur->next[val]==NULL)
        {
            cur->next[val] = new Node();
            cur= cur->next[val];
        }
        else{
            cur = cur->next[val];
        }
    }

    cur->end_mark = true;
}

bool search(string str)
{
    Node *cur = root;

    for(int i=0;i<str.size();i++)
    {
        int val = str[i] - 'a';
        if(cur->next[val]==NULL) return false;
        cur = cur->next[val];
    }

    return cur->end_mark;
}

void solve()
{
    root = new Node();

    int n,x,t,i,j;
    string str,word;
    cin>>n>>x;

    for(i=0;i<n;i++)
    {
        cin>>str;
        insert(str);
    }

    for(i=0;i<x;i++)
    {
        cin>>str;
        cout<<(search(str)?"YES":"NO");el;
    }
    
}



int main()
{
    solve();
}