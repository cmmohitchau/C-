#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int *ptrx=&x;
    int *ptry=&y;

    int result;

    int *result_ptr=&result; //storing address of variable result

   *result_ptr=*ptrx+*ptry;

    cout<<result<<endl; //The sum of value x and y is stored in result

    cout<<*result_ptr<<endl;  //Go to the address which is stored in the result_ptr and print it

    return 0;
}