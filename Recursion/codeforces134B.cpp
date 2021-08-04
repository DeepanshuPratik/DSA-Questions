//Let's assume that we have a pair of numbers (a, b). We can get a new pair (a + b, b) or (a, a + b) from the given pair in a single step.
//Let the initial pair of numbers be (1,1). Your task is to find number k, that is, the least number of steps needed to transform (1,1) into the pair where at least one number equals n.

//eg for n=5
//The pair (1,1) can be transformed into a pair containing 5 in three moves: (1,1)  →  (1,2)  →  (3,2)  →  (5,2).

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
ll total1=0,temp=INT_MAX;

void solve(ll a, ll b, ll n){
    if(a==n || b==n){
        temp=min(temp,total1);
        return;
    }
    else if(a>n || b>n){
        return;
    }
    else if(a<n && b<n)
        total1++;

    solve(a+b,b,n);
    if(a+b<n)
        total1--;
    solve(a,a+b,n);
    if(a+b<n)
        total1--;    
}
int main()
{
    fast;
    ll n;
    cin>>n;
    solve(1,1,n);
    cout<<temp<<endl;
}
