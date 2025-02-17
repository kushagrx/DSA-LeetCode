#include <bits/stdc++.h>
using namespace std;
void findMissing(int arr[],int n){
    int hashArr[n+1]={0};
    for(int i=0;i<n;i++){
        hashArr[arr[i]]+=1;
    }
    for(int i=1;i<=n;i++){
        if(hashArr[i]==0){
            cout<<i;
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMissing(arr,n);
}