#include<iostream>
#include<vector>
using namespace std;

void SortZeroesAndones(vector<int> &array){
    int count_zeroes=0;
    for(int ele:array){
        if(ele==0){
            count_zeroes++;
        }
    }
        for(int i=0;i<array.size();i++){
            if(i<count_zeroes){
                array[i]=0;
            }
            else{
                array[i]=1;
            }
        }
    
}
int main(){
    int size;
    cin>>size;
    vector<int>array;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        array.push_back(ele);

    }
    SortZeroesAndones(array);
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
   }

