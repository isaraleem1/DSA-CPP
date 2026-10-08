#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2){
      return p1.second>p2.second;
      
}
int maxprofit(vector<pair<int,int>> job){
   sort(job.begin(),job.end(),compare);
   int n=job.size();
   int ans=job[0].second;
   int current=job[0].first;
   for(int i=1;i<n;i++){
     if(job[i].first>current){
        ans+=job[i].second;
        current++;
     }
   }
   return ans;
}
int main(){
    vector<pair<int,int>> job={{4,20},{1,10},{1,40},{1,30}};
    cout<<maxprofit(job);
    return 0;
}