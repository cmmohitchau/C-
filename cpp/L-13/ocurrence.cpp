#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
     cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        int ele;
       cin>>ele;
        v.push_back(ele);
    }
    int x;
    cout<<"enter X: ";
    cin>>x;
    int ocurrence=-1;
    for(int i=0;i<n;i++){
        if(v[i]==x){
            ocurrence=i;
        }
    }
    cout<<ocurrence<<endl;

}