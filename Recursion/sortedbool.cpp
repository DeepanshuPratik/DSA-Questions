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
#define sizeof(x) (int)(x.size())
ll i,j;

bool solve(int a[],int i,int n){
    if(a[i]<a[i-1])
        return false;
    else if(i==n)
        return true;
    return solve(a,i+1,n);
}
int main()
{
    fast;
    int arr[]={5,10,12,15,18};
    cout<<solve(arr,1,5);   

}
