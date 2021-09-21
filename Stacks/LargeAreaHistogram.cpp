/* 


 
*/
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

void solve(ll a[], ll n){

    ll left[n],right[n];
    stack<int> st;
    // left filling
    left[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && a[i]<=a[st.top()]){
            st.pop();
        }
        if(st.empty())
            left[i]=-1;
        else {
            left[i]=st.top();
        }
        st.push(i);
    }
    // right filling
    stack<int> h;
    right[n-1]=n;
    h.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!h.empty() && a[i]<=a[h.top()]){
            h.pop();
        }
        if(h.empty())
            right[i]=n;
        else {
            right[i]=h.top();
        }
        h.push(i);
    }
    // answer
    ll ans=INT_MIN;
    FOR(n){
        ll temp= (right[i]-left[i] - 1)*a[i];
        ans=max(temp,ans);
    }
    cout<<ans;
    
}
    
int main()
{
    fast;
    int t;
    cin>>t;
    ll a[t];
    read(a,t);
    solve(a,t);
    
}




