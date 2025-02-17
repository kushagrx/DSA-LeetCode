/*The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.
Input: nums = [2,2,1,1,1,2,2]
Output: 2*/
#include <bits/stdc++.h>
using namespace std;
//using hashing as key,value pair
int majElement(vector<int>v){
    map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(v.size()/2)){
            return it.first;  //second is the count and first is the number
        }
    }
    return -1;
}
int main(){
    vector<int>vec={2,2,1,1,1,2,2};
    majElement(vec);
    return 0;
}