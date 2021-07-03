#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int row;
    cin>>s;
    cin>>row;
    int col=(s.size()/(2*row-2))*(row-1)+s.size()%(2*row-2);
    char arr[row][col];
    int i=0,j=0,k=0,flag=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            arr[i][j]=' ';
    }  
    i=0;j=0; int c=0; 
    while(s[i]!='\0'){
        if((j+k)%(row-1)==0 && c!=0){
            arr[j][k]=s[i];
            j--;
            k++;
            i++;
            if(j==0){
                c=0;
            }
        }
        else if(j<row){
            arr[j][k]=s[i];
            i++;
            j++;
            if(j==row){
                j-=2;
                k=row+flag-j-1;
                flag+=row-1;
                c++;
            }
                
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

}