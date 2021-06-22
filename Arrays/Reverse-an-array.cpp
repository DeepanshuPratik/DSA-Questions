#include <bits/stdc++.h>

using namespace std;

void method(int arr[],int n){    // arrays gets changed in passed functions too.

    for(int i=0;i<n/2;i++){        //        1 2 3 4 5   
        int temp=arr[i];          // Step 1: 5 2 3 4 1
        arr[i]=arr[n-i-1];        // Step 2: 5 4 3 2 1
        arr[n-i-1]=temp;         // total iterations runned : 2 times
    }
}

int main(){
    int N; // declared the variable representing size of array.
    cin>>N;
    int arr[N]; // initialization and dynamic allocation of array.

    for(int i=0;i<N;i++)
        cin>>arr[i];

    method(arr,N);


    for(int i=0;i<N;i++)
        cout<<arr[i];

return 0;
}