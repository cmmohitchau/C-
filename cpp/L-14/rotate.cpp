#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};
    int n=6;
   int k=3;
   int ansarray[6];
   int j=0;
   for(int i=n-k;i<n;i++){
    ansarray[j++]=array[i];
   }
   // 1 2 3 4 5 6
   // 4 5 6

   for(int i=0;i<=k;i++){
    ansarray[j++]=array[i];
   }
   for(int i=0;i<n;i++){
    cout<<ansarray[i]<<" ";
   }
   cout<<endl;
}