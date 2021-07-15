#include<bits/stdc++.h>

using namespace std;

int getPairsCount(int a[], int n, int k) {
        map<int, int> b;
        int c=0;
        for(int i=0;i<n;i++){    // eg 1 5 5 9 4 with sum=10
            b[a[i]]++;           // value->frequency 
        }                      // 1->1 5->2 9->1 4->1
        for(int i=0;i<n;i++){  // c=0
            c+=b[k-a[i]];       // i=0   c=1 frequency of 9 as 1+9=10
                                // i=1   c=3-1=2 frequency of 10-5=5 we did -1 as it would be repeated again and we need total nos forming pair.
            if(k-a[i]==a[i])    // i=2   c=4-1=3
                c-=1;          //  i=3   c=4  frequency of 10-9=1
        }                      // i=4    c=4 as 10-4=6 is not present => 0 frequency 
        
        return c/2;        // so if nos forming pair is 4 then no of pairs is 2(i.e. 4/2)
    }
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=getPairsCount(arr,n,k);
    cout<<ans;
}