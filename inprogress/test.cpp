//number spiral problem in cses web
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
    ll r,c;
    cin>>r>>c;
   if(c>r)
   {
    if((c%2)==0)
    {
        cout<<((c-1)*(c-1))+r<<"\n";
        return;
    }
    else
    {
        cout<<((c)*(c))+r-1<<"\n";  
        return;
    }
   }
   if(c<r)
   {
    if((r%2)==0)
    {
        cout<<((c)*(c))+r<<"\n";
        return;
    }
    else
    {
        cout<<((c-1)*(c-1))+r<<"\n";
        return;
    }
   }
   return;


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