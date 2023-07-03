#include<iostream>
using namespace std;
int main(){
    int x=90;
    int *ptr=&x;
    double dec=9.8;
    double *ptrd=&dec;
    cout<<"size of x is:"<<sizeof(x)<<endl;
    cout<<"size of dec is:"<<sizeof(dec)<<endl;
    cout<<ptr<<" "<<(ptr+1)<<"\n"; //the  address is in hexadecimal

    cout<<"The address of dec is:"<<ptrd<<" \n";
    cout<<"The address of dec+1 is:"<<(ptrd+1)<<endl;
     cout<<"The address of dec+2 is:"<<(ptrd+2)<<endl;
    return 0; //
}