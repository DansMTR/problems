//solving for :https://codeforces.com/contest/2131/problem/A
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

#define fastio() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const ll INF = 1e18;
const int MOD = 1e9+7;
const int N = 2e5+5; // Maximum size for arrays

void solve()
{
   int m;
   cin >>m;
   int a[m] ,b[m];
    for(int j=0;j<m;j++)
    {
        cin>>a[j];
    }
     for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int n = sizeof(a)/sizeof(a[0]);
     sort(a, a + n);    
    n = sizeof(b)/sizeof(b[0]);
     sort(b, b + n); 
  int counter =0;
  int counter1 =0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]<a[i])
            ;
            else
            counter+= (b[j]-a[i]);
        }
    }

    cout<<"\n";
    cout<<counter<<"\t"<<counter1;



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