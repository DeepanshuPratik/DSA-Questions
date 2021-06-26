#include <bits/stdc++.h>

using namespace std;

int main(){
    int N1,N2,n=10000,max=INT_MIN;
    cout<<"Enter the size of first array:";
    cin>>N1;
    int a1[N1],frequency[n]={0}; // if we initialized one element to an array other elements will automatically become 0.
    cout<<"array of N1 size"; // frequency array takes care of frequency of no it encounters.   
    for(int i=0;i<N1;i++){
        cin>>a1[i];
        frequency[a1[i]]++;
        max=max>a1[i]?max:a1[i];
    }
    cout<<"Enter the size of second array:";
    cin>>N2;
    int a2[N2];
    cout<<"array of N2 size";
    for(int i=0;i<N2;i++){
        cin>>a2[i];
        frequency[a2[i]]++;
        max=max>a2[i]?max:a2[i]; // calculated max from both the arrays so that for loop can be used as per requirement.
    }
    for(int i=0;i<=max;i++){
        if(frequency[i]!=0)
            cout<<i<<" "; // printing all elements which comes in both the arrays.
    }

}