#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int start=0,end=1;
    while(end!=n){
        if(arr[start]==0 && arr[end]!=0){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end++;
        }
        else if(arr[start]!=0 && arr[end]!=0 && start==(end-1)){
            if(start<n-2){
                start=end+1;
                end=start+1;
            }
            else {start++; end++;}
        }
        else if(arr[start]!=0 && arr[end]!=0){       // eg n=5 0 1 0 2 0 where s=start e=end
            start++;                               //  0 1 0 2 0
        }                                          //  s e
        else end++;                                //  1 0 0 2 0
    }                                              //    s e
    for(int i=0;i<n;i++)                           //  1 0 0 2 0
        cout<<arr[i]<<" ";                         //    s   e 
                                                   //  1 2 0 0 0
}                                                  //      s   e 