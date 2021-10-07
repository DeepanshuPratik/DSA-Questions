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

// Cases that occurs -->
//    n=6      )))(((    no of swaps= 2
//    n=4      ))((      no of swaps=1
//    n=8      ))))((((  no of swaps=2
//          observed formula no of swaps = (n/2+1)/2
void solve(string a,ll n){
    
    ll count=0;
    stack <char> p;
    FOR(n){
        if(a[i]=='(' || (a[i]==')' && p.empty()==1 ) || (a[i]==')' && p.top()==')' ))
            p.push(a[i]);
        else if(!p.empty() && a[i]==')' && p.top()=='(' ){
            p.pop();
        }
    }
    while(!p.empty()){
        count++;
        p.pop();
    }
    count/=2;
    cout<<(count+1)/2;
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

// sample input 
// t= 1
// n= 16
// string= )())(()))(()(()(




