#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define pll pair<ll,ll>
#define pcl pair<char,ll>
#define pb push_back
#define vl vector<ll>
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define fir first
#define sec second
#define size(x) (int)(x.size())
ll i,j,countl=0;

void solve(ll n){
    if(n==0){
        countl++;
        return;
    }
    else if(n<0) 
        return;
    solve(n-1);
    solve(n-2);
    solve(n-3);
}
int main()
{
    fast;
    
    ll n;
    cin>>n;
    solve(n);
    cout<<countl<<" ";
}
