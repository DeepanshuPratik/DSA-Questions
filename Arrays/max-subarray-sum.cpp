#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int maxs=0,point=0,sum=0;           // p denotes pointer = variable point
    while(point!=N){                // sample array: -1 5 -6 10 -9 -11 11                      sum after check sum<0
        sum+=arr[point];            // step 1         p                     sum=-1 maxs=0              0
        point++;                    // step 2           p                   sum= 5 maxs=5              5
        if(sum<0)                   // step 3              p                sum=-1 maxs=5              0
            sum=0;                  // step 4                 p             sum= 10 maxs=10            10
        maxs=maxs>sum?maxs:sum;     // step 5                    p          sum= 1  maxs=10            1
    }                               // step 6                        p      sum=-10 maxs=10            0
                                    // step 7                            p  sum= 11 maxs=11            11
    cout<<"Contiguous sub-array with maximum sum:"<<maxs;
}