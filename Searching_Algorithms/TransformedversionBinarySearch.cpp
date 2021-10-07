#include<bits/stdc++.h>
using namespace std;
// 5 6 7 8 9 10 1 2 3 4 
bool find(vector<int> a,int k) {
    int n=a.size();
    //cout<<n<<endl;
    int start=0,end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(k<a[0]){
            if(a[mid]>a[0])
                start=mid+1;
            else if(a[mid]<a[0] && k<a[mid])
                end=mid-1;
            else if(a[mid]<a[0] && k>a[mid])
                start=mid+1;
        }
        else{
            if(a[mid]<a[0])
                end=mid-1;
            else if(a[mid]>a[0] && k<a[mid])
                end=mid-1;
            else if(a[mid]>a[0] && k>a[mid])
                start=mid+1;
        }
        if(start>n-1 || start>end)
            return false;
        
        if(k==a[mid])
            return true;
    }

}
int main(){
    vector<int> a={5,6,7,8,9,10,1,2,3,4};
    int i;
    cin>>i;
    bool f=find(a,i);
    if(f==true)
        cout<<"found: "<<i<<endl;
    else cout<<"not found: "<<i<<endl;
}