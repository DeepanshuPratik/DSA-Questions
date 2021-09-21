#include<bits/stdc++.h>
using namespace std;
/*
INPUT:
           8                                                                           
           __                           
     6    |  | 6                        
     __ 5 |  |__                        
    |  |__|  |  |2                          
    |  |  |  |  |__                         
    |__|__|__|__|__|                      


PROCESSED 1:

           8
           __
     6    |  | 6
     __ 5 |  |__
    |..|..|..|..|2         dotted portion => rectangle area --> 5*4 as ((height)*(no of unit distant inputs))           
    |. |  |  | .|__
    |..|..|..|..|__|     
*/
int largestRectangleArea(vector<int>& a) {
    int n=a.size();
    int left[n],right[n];
    stack<int> st;
    // left index filling of next smaller element
    left[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && a[i]<=a[st.top()]){
            st.pop();
        }
        if(st.empty())
            left[i]=-1;
        else {
            left[i]=st.top();
        }
        st.push(i);
    }
    // right index filling of next smaller element
    stack<int> h;
    right[n-1]=n;
    h.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!h.empty() && a[i]<=a[h.top()]){
            h.pop();
        }
        if(h.empty())
            right[i]=n;
        else {
            right[i]=h.top();
        }
        h.push(i);
    }
    // calculating area of corresponding data arranged.
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int temp= (right[i]-left[i] - 1)*a[i];
        ans=max(temp,ans);
    }
    return(ans);
}