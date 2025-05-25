#include <bits/stdc++.h>
using namespace std;

// Type shortcuts
#define ll long long
#define ull unsigned long long
#define ld long double

// Common macros
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()


#define rep(i,a,b) for(int i = (a); i < (b); ++i)
#define per(i,a,b) for(int i = (a); i >= (b); --i)
#define rep_step(i, a, b, step) for(int i = (a); i < (b); i += (step))
#define per_step(i, a, b, step) for(int i = (a); i >= (b); i -= (step))

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const ll INF = 1e18;
const int MOD = 1e9+7;
const int N = 2e5+5; // Maximum size for arrays

void solve()
{
   int n,t;
   cin>>n;
   vector<int> p;
   vector<int> imp;
   rep(i,0,n)
   {
    cin>>t;
    if((t%2)==0)
        p.pb(t);
    else
        imp.pb(t);
   }
   
    if(p.size()<imp.size())
      {
            cout<<"NO"<<"\n";
            return;
        }
   sort(imp.begin(), imp.end());
   sort(p.begin(), p.end(), greater<int>());
    //   for (const auto& element : p) {
    //     cout << element << " ";
    // }
    // cout<<"\n";
    //   for (const auto& element :imp) {
    //     cout << element << " ";
    // }
    int sump=0;
    int sumimp=0;
    rep(i,0,imp.size())
    {
        sump+=p[i];
        sumimp+=imp[i];
        if(sump<=sumimp)
        {
            cout<<"NO"<<"\n";
            return;
        }
    }

cout<<"YES"<<"\n";
 return ;
}


int main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }


    return 0;
}