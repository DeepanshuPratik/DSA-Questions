#include <bits/stdc++.h>

using namespace std;

//Rules : 
// The letters I, X, C can be repeated thrice in succession. 
// Additionally, L, V, D cannot be repeated or the number is considered to be invalid.
// If a lower value digit is written to the left of a higher value digit, it is subtracted.
// If a lower value digit is written to the right of a higher value digit, it is added.
// Only I, X, and C can be used as subtractive numerals.

int main(){
    map<int, string> roman;
    vector<int> a;
    roman[1]="I";
    roman[4]="IV";
    roman[5]="V";         
    roman[9]="IX";       
    roman[10]="X";       
    roman[40]="XL";
    roman[50]="L";   
    roman[90]="XC";      
    roman[100]="C";
    roman[400]="CD";
    roman[500]="D";
    roman[900]="CM";                    
    roman[1000]="M";
    int n;
    cin>>n;                             // Observation:
    auto it=roman.find(1000);           // 356 -> 300 50 6 name them in sequence and there is your roman number
    while(n!=0){                        // 945 -> 900 40 5
        int divide= n/(it->first);   // Steps: 
        n%=it->first;                // n=945   1) divide=945/1000=0
        while(divide--){             // 2) divide=(945/900)=1  n=45
            cout<<it->second;        // 3) printed roman of 900 = CM
        }                            // 4) 45/500=0 then 45/400 ..till divide=45/40=1
        --it;                       //  5) n=45%40=5 it will then print 40 in roman
    }                                // 6) then samething with 5 with final output as CMXLV
    
}