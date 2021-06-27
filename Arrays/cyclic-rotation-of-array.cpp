#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,noofrotation;
    cin>>N>>noofrotation;
    int arr[N];
    int temp[noofrotation];    // i: 0 1 2 3 4   N=5 R(no of rotations)=2  
    for(int i=0;i<N;i++){      // N-R= 3 i: 3 4
        cin>>arr[i];
        if(i>N-noofrotation-1){   // as R=2 then we should move indexes 3 and 4 in front
            temp[i-N+noofrotation]=arr[i];   // N-R-1= 2 so if i>2 => i=3 and 4
        }
    }
    int temp1[N],j=0;           //temporary array for final rotated array.
    for(int i=0;i<N;i++){
        if(i<noofrotation)          // if i<R as R elements have to come before it
            temp1[i]=temp[i];
        else{ 
            temp1[i]=arr[j];        // left elements should be in order of start of array.
            j++;
        }
        cout<<temp1[i]<<" ";
    }
    
}