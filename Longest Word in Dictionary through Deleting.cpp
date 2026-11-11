#include <bits/stdc++.h>
#define ff first
#define ss second
#define el cout << endl;
#define ck           \
    cout << "here?"; \
    el;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
// #define ans cout<<"ans   ";
#define sp " "
#define mod(a, b) (((a) % (b)) + (b)) % (b)
#define chad(x, y) ((x + y - 1) / y)
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const double PI = 3.1415926535;
// const int inf = 1e18;
const int mod = 1000000007;
const int fact_mod = 998244353;

typedef long long ll;
using namespace std;
vector<ll> arr(200, 0);
class Solution
{
public:
    string findLongestWord(string s, vector<string> &dictionary)
    {
        sort(dictionary.begin(), dictionary.end());
        bool ans = false;
        string comp,ret="";
        for (int i = 0; i < dictionary.size(); i++)
        {
            comp = dictionary[i];
            int l = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == comp[l])
                    l++;
                if (l == comp.size() && comp.size()>ret.size())
                {
                    ans = true;
                    ret=comp;
                    break;
                }
            }
            // cout<<ret;el;
            
        }
        // cout<<ret;el;
        return ans ? ret : "";
    }
};
int main()
{
    Solution s;
    string a = "a";
    vector<string> b = {"a", "b", "c", "plea"};
    cout << s.findLongestWord(a, b);
}