#include <bits/stdc++.h>

using namespace std;

void sort012(int a[], int n){
    int frequency[3]={0,0,0}; // created frequency array for count of 0,1 and 2.
    for(int i=0;i<n;i++)       // storing the frequencies of 0,1,2 at the respective indexes
        frequency[a[i]]++;   

    int j=0,i=0;
    while(j<n){             
        if(frequency[i]==0)
        i++;
        
        a[j]=i;    // putting index till its frequency = 0.
        j++;       // eg frequency[]={2,1,2} then a[]={0,0,1,2,2}  
        frequency[i]--;
    }
    
}
    
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort012(a,n);     // calling sort012 function and array neednot to be passed as reference
    for(int i=0;i<n;i++)
        cout << a[i]  << " ";
    
}