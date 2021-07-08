#include <bits/stdc++.h>

using namespace std;

int minJumps(int arr[], int n){
        int p=arr[0],jump=1;
        int i=0,maxm=arr[0],index=0;
        if (n <= 1)
            return 0;
        if (arr[0] == 0)
            return -1;
        for(int i=1;i<n;i++){
            if (i == n - 1)
                return jump;
            maxm=max(maxm,arr[i]+i);
            p--;
            if(p==0){
                jump++;
                if (i >= maxm)
                    return -1;
                p=maxm-i;
            }
        }
        return -1;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"MIN JUMP: "<<minJumps(arr,n);
}