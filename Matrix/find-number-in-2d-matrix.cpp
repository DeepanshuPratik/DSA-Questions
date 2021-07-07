// Write an efficient algorithm that searches for a target value in an m x n integer matrix. The matrix has the following properties:

// 1) Integers in each row are sorted in ascending from left to right.
// 2) Integers in each column are sorted in ascending from top to bottom.

#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> matrix;
    int target,row,column,input;
    cin>>row>>column;
    for(int i=0;i<row;i++){
        vector<int> rows;
        for(int j=0;j<column;j++){
            cin>>input;
            rows.push_back(input);
        }
        matrix.push_back(rows);
    }
    cin>>target;
    int i=matrix.size()-1; int j=0;
        bool found=false;
        if(i==0){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[0][j]==target){
                    found=true;
                    break;
                }
            }
        }
        else{
            int p=matrix[0].size();
            while(i>=0 && j<p){
                if(matrix[i][j]>target){
                    --i;
                }
                else if(matrix[i][j]<target){
                    j++;
                }
                else{
                    found=true;
                    break;
                } 
            }
        }
        if(found==1)
            cout<<"found";
        else
            cout<<"not found";
}