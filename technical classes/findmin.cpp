#include <iostream>
using namespace std;
void findMin(int arr[],int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMin(arr,n);
    return 0;
}