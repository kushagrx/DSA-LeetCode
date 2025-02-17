//to find the maximum no. of consecutive ones
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findConsecOne(int arr[],int n){
    int counter=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            counter+=1;
            if(counter>max){
            max=counter;
        }
        }
        else{
            counter=0;
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=findConsecOne(arr,n);
    cout<<result;
    return 0;
}