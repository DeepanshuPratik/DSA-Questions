#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int start=0,end=N-1;   // initialised 2 pointers one will move from beginning
    while(start<=end){      // other will move from end.
        if(arr[start]>=0 && arr[end]<0){     //we are replacing only the nos which are -ve
            int temp=arr[start];           // and at the ends of the array.
            arr[start]=arr[end];
            arr[end]=temp;
            end--;
        }
        if(arr[start]>=0 && arr[end]>=0){
            end--;              // we are moving end pointer because if there is a negative 
            start--;     // no in between then above logic will work if the -ve no is
        }               // right to a positive no.
        start++;
    }
                                     // eg arr[]={-1,-5,-2,1,2,5,-8,8,-9,-1}
    for(int i=0;i<N;i++)             // Step 1:    *                      *
        cout<<arr[i]<<" ";           // Step 2:       *                   *
                                     // Step 3:          *                * 
}                                    // Step 4:            -1             1
                                     // Step 5:               -9        2  
                                     // Step 6:                  *   *   cursor at 5 & 8
                                     // Step 7:   -1 -5 -2 -1 -9 -8 5 8 2 1