#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,maxs=0;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
        maxs=maxs>arr[i]?maxs:arr[i]; //max element in array for frquency array size limit
    }
    int frequency[maxs+1]={0};
    for(int i=0;i<N;i++)
        frequency[arr[i]]++;   // adding frequency of every element in array "arr"
    for(int i=0;i<=maxs;i++){
        if(frequency[i]>1){    // if frequency of element is greater than 1 then print element
            cout<<i;
            break;
        }
    }
}