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

        struct node
        {
            public:
            node *next[26];
            bool end_mark;
            int cnt;
            node(){
                for(int i=0;i<26;i++)
                {
                    next[i] = NULL;
                }
                end_mark = false;
                cnt = 0;
            }
        };
        node *root;

        void insert(string str)
        {
            node *cur = root;
            for(int i=0;i<str.size();i++)
            {
                int val = str[i] - 'a';
                if(cur->next[val]==NULL)
                {
                    cur->next[val] = new node();
                    cur = cur->next[val];
                    cur->cnt++;
                    
                }
                else
                {
                    cur = cur->next[val];
                    cur->cnt++;
                }


            }
            cur->end_mark = true;
        }

        string longestCommonPrefix(vector<string>& strs) {
            root = new node();
            for(auto it : strs)
            {
                insert(it);
            }

            string str = "";

            int n = strs.size();

            node *cur = root;
            bool ok = true;
            while (ok)
            {
                ok = false;
                for(int i=0;i<26;i++)
                {
                  

                    if(cur->next[i]!=NULL && cur->next[i]->cnt==n)
                    {
                        
                        str+=i+'a';
                        cur= cur->next[i];
                        ok = true;
                    }
                }
               
            }

            cout<<str;el;
            
            return str;
            
        }
    };

    int main()
    {
        Solution s;
        vector<string> a={"flower","flow","flight"};
        s.longestCommonPrefix(a);
    }