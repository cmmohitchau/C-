#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;

    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
      for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
           cout<<A[i][j]<<" ";
        }
        cout<<endl;}
    int transpose[c1][r1];
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
           transpose[i][j]=A[j][i];
        }
    }
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
           cout<<transpose[i][j]<<" ";
        }
        cout<<endl;}
    return 0;
}