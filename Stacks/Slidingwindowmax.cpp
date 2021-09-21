/* Function created to find the max in window of k elements*/
#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& a, int k) {
       long long i=0,j=0;
        int n=a.size();
        vector<int> b;
        stack<int> h;
        long long right[n]; // getting next greater element on right of current element
        right[n-1]=n;       // refer finding max on nearest right/left
        h.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!h.empty() && a[i]>=a[h.top()]){
                h.pop();
            }
            if(h.empty())
                right[i]=n;
            else 
                right[i]=h.top();
            h.push(i);
        }
        // this for loop is finding max of window
        for(int p=0;p<n-k+1;p++){
            if(j<p)                 
                j=p;
            while(right[j]<=p+k-1){
                j=right[j];
            }
            b.push_back(a[j]);
        }
        /* DRY RUN OF CODE 
        Arr[] = 1,3,-1,-3,5,3,6,7  k=3
                0 1  2  3 4 5 6 7
        next right max of above array
        3 5 5 5 6 6 7 -1

        NOTE: we have stored indices of above next max element on right so that we could make jumps

        A[] = 1 4 4 4 6 6 8--> taken 8 because assumed that (n+1)th element is largest
        ITERATION 1:
              1 3 -1 -3 5 3 6 7
            i *         
            j *
            k 1
        ITERATION 2: 
        j=A[j] => j=1 
              1 3 -1 -3 5 3 6 7
            i *         
            j . *  
            k 1
        ITERATION 3: refer jump using A[] as j=A[j] if A[j] is out of bound of k elements then here increment i and j=i only if j is left behind
            j=A[j] => j=4
              1 3 -1 -3 5 3 6 7
            i *         
            j . .  .  . *
            k 1
            As k=3 elements has been covered and index 4 is out of window => Answer to this window is 3 with index 1.
        */
        return b;
    }