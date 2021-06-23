#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin>>N;                        // declared the variable representing size of array.
    int arr[N];             
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int max=arr[0],min=arr[0];
    
    for(int i=0;i<N;i++){
        max=max>arr[i]?max:arr[i];  // used ternary operator which says if condition is 
        min=min<arr[i]?min:arr[i]; //  is true then return first one else the second one.
    }
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;
    return 0;
}