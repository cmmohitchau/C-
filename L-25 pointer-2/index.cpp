#include<iostream>
using namespace std;

void findingTheindex(string s,char c,int *first,int *last){
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            *first=i;
            break;
        }
    }

    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==c){
            *last=i;
            break;
        }
    }
}
int main(){
    string s = "aaabac";
    char c = 'a';

    int first=-1; // storing a random value
    int last =-1;

    int *pf=&first; //storing address of first and last variable
    int *pl=&last;

    findingTheindex(s,c,pf,pl); //passing value of string, char, pf and pl 
                                // *pf means dereferencing to first

    cout<<first<<" "<<last<<endl;
    cout<<*pf<<" "<<*pl<<endl;
    
    return 0;
}