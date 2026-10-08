#include <iostream>
#include <vector>
using namespace std;

int minimumcoin(vector<int> coin,int v){
    int n=coin.size();
    int ans=0;
    int m;
     for(int i=n-1;i>=0 && v>0;i--){
        if(coin[i]<=v){
             m=v/coin[i];
             ans+=m;
             v-=m*coin[i];
        }
     }
     return ans;
}
int main(){
    vector<int>ans={1,2,5,10,20,50,100,500,2000};
    cout<<minimumcoin(ans,1099);
    return 0;
}