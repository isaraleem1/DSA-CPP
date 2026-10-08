#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> pairofmin(vector<int> &arr1,vector<int> arr2){
     sort(arr1.begin(),arr1.end());
     sort(arr2.begin(),arr2.end());
     int n=arr1.size();
     vector<pair<int,int>> pairofmin(n);
     for(int i=0;i<n;i++){
       pairofmin[i]=make_pair(arr1[i],arr2[i]);
     }
     return pairofmin;
}
int main(){
    vector<int> arr1={4,1,8,7};
    vector<int> arr2={2,3,6,5};
     int n=arr1.size();
    vector<pair<int,int>> p=pairofmin(arr1,arr2);
    
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}