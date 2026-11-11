#include<bits/stdc++.h>
#define ff first
#define ss second
#define el cout<<endl;
#define ck cout<<"here?";el;
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
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

/*

3 2 1 6 2

0 3 5 6 12 14


*/
void solve(){
    long long t,x,y,z,i,j;
    //cin>>t;
    t=1;
    
    while(t--)
    {
        long long i,j,n,l,r;
        string s;
        cin>>s;
        
        stack<char> stk;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stk.push(s[i]);
            else{
                //cout<<stk.top();el;
                if((s[i]==')' && stk.top()=='(') || (s[i]=='}' && stk.top()=='{') || (s[i]==']' && stk.top()=='['))
                {
                    stk.pop();
                }
                else
                break;
            }
        }
        //cout<<stk.size();el;
        if(stk.size()==0)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
        el;
       
        
    }
    

}
int main()
{
    solve();


}
