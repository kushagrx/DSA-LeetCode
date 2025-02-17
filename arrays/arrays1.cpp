#include <bits/stdc++.h>
using namespace std;
void largestNum(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<"largest number: "<<largest<<'\n';
}
void secondLargest(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    int secondlarge=arr[0];
    for(int i=1;i<n;i++){
        if(secondlarge<arr[i]&&arr[i]<largest){
            secondlarge=arr[i];
        }
    }
    cout<<"2nd largest number: "<<secondlarge;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largestNum(arr,n);
    secondLargest(arr,n);
    return 0;
}