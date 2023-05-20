#include<iostream>
using namespace std;
int main(){
    int array[]={1,34,45,6};
    int key;
    cout<<"enter key:";
    cin>>key;
    int ans=-1;
    for(int i=0;i<4;i++){
        if(array[i]==key){
            ans=i;
            break;

        }
    }
    cout<<ans<<endl;
}