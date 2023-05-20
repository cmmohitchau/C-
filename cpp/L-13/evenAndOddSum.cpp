// differ betn sum of elements at even and sum of elements at odd indices
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};
    int sum=0;
    int size=6;
    for(int i=0;i<size;i++){
        if(i%2==0){
            sum+=array[i];
        }
            else{
                sum-=array[i];
            }
        
    }
    cout<<sum<<endl;
    return 0;
}