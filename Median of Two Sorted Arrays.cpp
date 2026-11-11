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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size(),m=nums2.size();
        if(m>n)
        {
            vector<int> a;
            a=nums1;
            nums1=nums2;
            nums2=a;
            swap(n,m);
        }
        int len = n+m;

        bool even = !(len&1);
        int meadPos = len/2;
        cout<<meadPos;el;
        int l =-1,r=meadPos;
        int r1=INT_MAX,r2=INT_MAX,l1=INT_MIN,l2=INT_MIN;
        int r11,r22,l11,l22;
        while (l+1<r)
        {
            
            r1=INT_MAX,r2=INT_MAX,l1=INT_MIN,l2=INT_MIN;
            int mid = l+(r-l)/2;
            int down = meadPos-mid;
            
            if(mid>n) r=mid;
            else if(down>m) l=mid;
            else if(mid==n)
            {
                l1=nums1[mid-1];
                if(down<m) r2=nums2[down];
            }
            else if(mid==0)
            {
                r1=nums1[mid];
                if(down==m) l2=nums2[down-1];
                else if(down>m) {
                    l=mid;
                }
                else{
                    l2=nums1[down-1];
                    r2=nums2[down];
                }
            }
            else{
                l1=nums1[mid-1];
                r1=nums1[mid];
                if(down>m) l=mid;
                else if(down == m && m!=0) l2=nums2[down-1];
                else if(down==0 && m!=0) r2=nums2[down];
                else if(m!=0)
                {
                    r1=nums1[down-1];
                    r2=nums2[down];
                }  
            }

            if(r1<l1) l=mid;
            else {
                r11=r1,r22=r2,l11=l1,l22=l2;
                cout<<l11<<sp<<r11;el;
                cout<<l22<<sp<<r22;el;el;
                r=mid;
            }
           
        }
        
        
        double ans;
        if(even)
        {
             ans = (double)(min(r11,r22)+max(l11,l22))/(double)2.00;
            
        }
        else
        {
             ans = min(r11,r22);
        }
        return ans;



        // int r1=INT_MAX,r2=INT_MAX,l1=INT_MIN,l2=INT_MIN;
        // l1=r,l2=meadPos-r;
        // if(l1!=n) r1=l1+1;
        // else r2=l2+1;
        // if(l2!=m) r2=l2+1;
        
        // if(r==0 && n!=0) r1=nums1[r];
        // else if(r!=n && n!=0) {l1=nums1[r-1],r1=nums1[r];}
        // else if(r==n && n!=0) l1=nums1[r-1];

        // int k = meadPos-r;
        // if(k==0 & m!=0) r2=nums2[k];
        // else if(k!=m && m!=0) {l2=nums2[k-1],r2=nums2[k];}
        // else if(k==m && m!=0) l2=nums2[k-1];

        // // cout<<max(l1,l2)<<sp<<min(r1,r2);el;

        // // cout<<r<<sp<<meadPos-r;el;
        //  double ans;
        // if(even)
        // {
        //      ans = (double)(min(r1,r2)+max(l1,l2))/(double)2.00;
            
        // }
        // else
        // {
        //      ans = min(r1,r2);
        // }
        // return ans;

    }
};


int main()
{
    Solution s;
    vector<int> a={2,3,4},b={1};
    cout<<fixed<<setprecision(5)<<s.findMedianSortedArrays(b,a);
}
/*
1 2 4 5
*/