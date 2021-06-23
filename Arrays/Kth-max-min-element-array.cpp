#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int, int, int);
int kthLargest(int arr[], int, int, int);
 
int main()
{  
    int number_of_elements;
    cin>>number_of_elements;
    int a[number_of_elements];
            
    for(int i=0;i<number_of_elements;i++)
        cin>>a[i];
                
    int k;
    cin>>k;
    cout<<k<<"th smallest element:"<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    cout<<k<<"th largest element:"<<kthLargest(a, 0, number_of_elements-1, k)<<endl;
    
    return 0;
}

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
int kthSmallest(int arr[], int l, int r, int k) {
    int max=INT_MIN;            //initialised variable max with minimum no of int
    for(int i=0;i<r+1;i++){    // finding out max value in the array.
        if(arr[i]>max)
        max=arr[i];
    }
    int c=0;
    int N=1e6+2; 
    bool check[N];           // created bool type frequency array
    for(int i=0;i<N;i++)    //  initialising all values with false.
    check[i]=false;
    
    for(int i=0;i<=r;i++){    // initialising array values as true in the "check" array
        check[arr[i]]=true;
    }
    int i=0;
    while(c<k && i<=max){    // Kth Minimum will be kth true value in "check" array from start
        if(check[i]==true)
        c++;
        
        i++;
    }
    return i-1;       // did i-1 because of extra running of loop when it checks when i=max
}

int kthLargest(int arr[], int l, int r, int k) {
    int max=INT_MIN;
    for(int i=0;i<r+1;i++){        // finding out max value in the array.
        if(arr[i]>max)
        max=arr[i];
    }
    int c=0;
    int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++)
    check[i]=false;
    
    for(int i=0;i<=r;i++){       // initialising array values as true in the "check" array
        check[arr[i]]=true;
    }
    int i=max;
    while(c<k && i>=0){     // Kth largest will be from end kth true value in "check" array
        if(check[i]==true)
        c++;
        
        i--;
    }
    return i+1;       // did i+1 because of extra running of loop when it checks when i=0 
}