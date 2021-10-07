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

void solve(string a,ll n){
    ll flag=0;
    stack <char> p;
    FOR(n){
        if(a[i]=='(')
            p.push(a[i]);
        else if(!p.empty() && a[i]==')' ){
            p.pop();
            p.pop();
        }
        else {
            flag=1;
            break;
        }
    }
    if(flag==1 || !p.empty())
        cout<<"unbaLANCED";
    else cout<<"balanced";
            
    endl;
}
    
int main()
{
    fast;
    ll t;
    cin>>t;
    FOR(t){
        ll n;
        cin>>n;
        string a;
        cin>>a;
        //read(a,n);
        solve(a,n);
        //solve(n);
    }
    
}





