#include<iostream>
#include<vector>
using namespace std;

int maxonesrow(vector<vector<int>> &V){
    int maxones=INT16_MIN;
    int maxonesrow=-1;

    int column=V[0].size();
    for(int i=0;i<V.size();i++){
        for(int j=0;i<V[i].size();j++){
            if(V[i][j]==1){
                int numberOfOnes= column - j;
                if(numberOfOnes>maxones){
                    maxones=numberOfOnes;
                    maxonesrow=i;
                }
             break;

            }
        }
    }
    return maxonesrow;
}
int main(){
    int n,m;
    cin>>n>>m;

vector< vector<int>>V(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>V[i][j];
        }
    }
   int res=maxonesrow(V);
    cout<<res<<endl;
}