#include<iostream>
using namespace std;

void swap(int *x,int *y){ //creating another variable p1=x and p2=y which is pointing 
                          // to the address of original x and y
int temp=*x;
*x=*y;
*y=temp;

}
int main(){
    int x=10;
    int y=20;

    int *p1=&x;
    int *p2=&y;

    swap(p1,p2);  //calling swap function and passing the value p1 and p2 which are storing the addresss of
                   // x and y

    cout<<x<<" "<<y;
    return 0;
}