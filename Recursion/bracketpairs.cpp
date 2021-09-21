// We need to print all possible brackets arrangement for given n
// eg.  for n=3
// 1. ((()))
// 2. ()(())
// 3. (()())
// 4. ()()() 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define FOR(n) for(int i=0;i<n;i++)
#define endl cout<<endl
#define read(b,n);  for(int i=0;i<n;i++) cin>>b[i];
#define print(b,n);  for(int i=0;i<n;i++) cout<<b[i]<<" ";
#define pll pair<ll,ll>
#define pcl pair<char,ll>
#define pb push_back
#define vl vector<ll>
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define fir first
#define sec second
#define size(x) (int)(x.size())
ll i,j;

void solve(ll n, string k){
    
    if(size(k)==2*n){
        cout<<k;
        endl;
        return;
    }                             // applied recursion and splitted this case into 2
    string p="(";                // first case (()) --> enclosing in bracket
                                //  second case ()() --> adding separate bracket.
    p+=k;
    p+=")";
    solve(n,p);
    p="()";
    p+=k;
    solve(n,p);
                
}              
            /* DRY RUN OF CODE for n=3
              //     ()
                    /  \
                   /    \
                ()()     (())
                / \      /  \   
               /   \  ()(()) \
              /     \       ((()))
           ()()() (()())

                */
int main()
{
    fast;
    ll t,n;
    cin>>t;
    FOR(t){
        cin>>n;
        solve(n,"()");
    }
    
}