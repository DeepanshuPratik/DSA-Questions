#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define pll pair<ll,ll>
#define pcl pair<char,ll>
#define mapsi map<string,int>
#define pb push_back
#define vl vector<ll>
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define fir first
#define sec second
#define size(x) (int)(x.size())
ll total=0;

void solve(string s,int i){
    if(i>=s.length()){
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++){
    swap(s[i],s[j]);
    solve(s,i+1);
    swap(s[j],s[i]);
    }
}
int main()
{
    //fast;
    string arr="capsa";
    solve(arr,0);
}
