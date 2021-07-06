#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int row;
    cin>>s;
    cin>>row;
    if(row==1) //one of the base case where rows=1
            cout<<s;
        
        int n = s.size(),x=0;
        
        map<int,string> m; //stores each row's characters as string
        
        for(int i = 0,j = 0;i<n;++i) //j and x for traversing zigzag
        {   
            m[j]+=s[i];
            
            if(j==row-1)
                x=1;
            else if(j==0)
                x = 0;
            if(x==1)
                --j;        // Take eg DEEPANSHU and rows=3
            else            // D   A   U
                ++j;        // E P N H       => WORD is= DAUEPNHES
        }                   // E   S
                          // string1  string2  string 3   3 strings as row=3
        string ans="";       // D       E        E   
        for(auto e:m)        // D       EP       E    
            ans+=e.second;   // DA      EP       E
                             // DA      EPN      E
        cout<<ans;           // DA      EPN      ES
}                            // DA      EPNH     ES
                             // DAU     EPNH     ES -> final strings in map