#include <iostream>
#include <bits/stdc++.h>
//find the number that appears once and others twice
// eg 1123344  ans->2
using namespace std;
int fxn(int arr[],int n){
    int result=arr[n-1];
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            result=arr[i];
        }
    }
    return result;
}

/*use hash, dont be a moron
i was about to use hash but i let my 
intrusive thoughts win */

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=fxn(arr, n);
    cout <<result;
    return 0;
}