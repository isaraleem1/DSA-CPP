#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second; //decending order;

}
int maxchainlength(vector<pair<int,int>> &p ){
 sort(p.begin(),p.end(),compare);
 int chainlength=1;
 int currend=p[0].second;
 
 for(int i=1;i<p.size();i++){
    if(p[i].first>currend){
        chainlength++;
        currend=p[i].second;
    }
 }
 return chainlength;
}
int main(){
    vector<pair<int,int>>p={{5,24},{39,60},{5,28},{27,40},{50,90}};
    cout<<maxchainlength(p);
    return 0;
}