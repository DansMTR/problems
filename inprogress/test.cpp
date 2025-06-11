//solving for :https://codeforces.com/contest/1807/problem/C
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
    int n,counter,j,k;
    string s;
    cin>>n>>s;
    n--;
  
    for(int i=0;i<n-1;i++)
    {
        k=i+1;
        j=i+2;
        //cout<<s[i]<<"\t"<<s[j]<<"\t"<<s[k]<<"\n";
       
       counter =0 ;
        
        if(s[i]==s[k])
        {
            //cout<<s[i]<<"\t"<<s[k]<<"\n";
            counter++;
        }
        else if(s[i]==s[j])
         {
            //cout<<s[i]<<"\t"<<s[j]<<"\n";
            counter++;
        }
        
        else if(s[k]==s[j])
         {
            //cout<<s[k]<<"\t"<<s[j]<<"\n";
            counter++;
        }
    if(counter==0)
    {
        cout<<"no"<<"\n";;
        return;
    } 
    }

 cout<<"yes"<<"\n";;
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