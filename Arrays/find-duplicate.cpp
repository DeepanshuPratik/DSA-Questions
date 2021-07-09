#include <bits/stdc++.h>

using namespace std;

int main(){    //Floyd Algorithm
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int slow=arr[0],fast=arr[0];

    do{
        fast=arr[arr[fast]];
        slow=arr[slow];
    }while(slow!=fast);
    
    slow = arr[0];

    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    cout<<endl<<slow;

}