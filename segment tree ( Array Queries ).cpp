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
    int store_result[4*N];

    void build_tree(int node,int l,int r){
        
        if(l==r) {store_result[node] = arr[l];
            return;
        }

        int mid = l+(r-l)/2;
        int left_child = (2*node);
        int right_child = (2*node + 1); 
        build_tree(left_child,l,mid);
        build_tree(right_child,mid+1,r);

        store_result[node] = min(store_result[left_child],store_result[right_child]);
    }


    int query(int node,int l,int r,int x,int y)
    {
        // we start compearing 1 to n and start devide
        // 3 condition will check
        // -> if perfectly fit then directly retuen the result ( if asked range is (12,17) and you got range (13,15) this is also pefectlty fit)
        // -> not perfectly fit then just ignore the range ( current range not including given range)
        // -> partially fit -> then again divide them



        //check perfectlty fit
        if(l>=x && y>=r) return store_result[node];

        //check not match
        if(r<x || y<l) return INT_MAX; 

        int mid = l + (r-l)/2;

        int left_child = (2*node);
        int right_child = (2*node + 1); 

        int left_ans = query(left_child,l,mid,x,y);
        int right_ans = query(right_child,mid+1,r,x,y);

        return min(left_ans,right_ans);
    }

    void solve()
    {
        int n,x,t,i,j;
        t=1;
        cin>>t;
        int c = t;
        while(t--)
        {
            int q=0;
            cin>>n>>q;
            
            for(i=1;i<=n;i++) cin>>arr[i];

            // build a tree which store respected result using divide and conqure manner
            build_tree(1,1,n);
            
            
            cout<<"Case "<<c-t<<":";el;
            while(q--)
            {
                int l,r;
                cin>>l>>r;

                // query find respected resulted from stroed value in the tree -> build_tree & store_result
                int res = query(1,1,n,l,r);
                cout<<res;el;
            }

        }
    }



    int main()
    {
        solve();
    }