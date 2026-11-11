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
            node(){
                for(int i=0;i<26;i++)
                {
                    next[i] = NULL;
                }
                end_mark = false;
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
                }
                else
                {
                    cur = cur->next[val];
                }


            }
            cur->end_mark = true;
            
        }

        bool wordBreak(string s, vector<string>& wordDict) {
            root = new node();
            for(auto it : wordDict)
            {
                insert(it);
            }

            bool ans = false;
            node *cur = root;

            int i=0;
            int n = s.size();
            vector<int> valid(n,0);

            int j;

            while(i<n)
            {
                if(i!=0 && valid[i-1]==0) {i++;continue;}

                cur = root;
                for(j=i;j<n;j++)
                {
                    int val = s[j] -'a';
                    // cout<<s[j]<<sp;
                    if(cur->next[val]!=NULL)
                    {
                        cur = cur->next[val];
                        if(cur->end_mark) valid[j] = 1;
                    }
                    else break;
                }
                // cout<<" valid";el;
                i++;    

            }
            // for(auto it : valid)cout<<it<<sp;el;
            return valid[n-1];
        }
    };

    int main()
    {
        Solution s;
        string str= "catsandog";
        vector<string> a={"cats","dog","sand","and","cat"};

        s.wordBreak(str,a);
    }