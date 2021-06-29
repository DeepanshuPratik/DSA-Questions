#include <bits/stdc++.h>

using namespace std;

// METHOD 2
void findDuplicate(int v1[], int n) {
    int p;
    sort(v1,v1+n);            // sorting takes nlog(n) time complexity
    for(int i=0;i<n-1;i++){
        p=v1[i]^v1[i+1];       // p= xor of two adjacent nos and imp: a xor a = 0
        if(p==0){
            cout<<endl<<"Duplicate: "<<v1[i];
            p=v1[i];
            break;
        }
    }
}

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
            cout<<"Duplicate: "<<i;
            break;
        }
    }
    //METHOD 2 with time complexity: O(nlog(n)) and space complexity: O(1)
    findDuplicate(arr,N);
    return 0;
}


