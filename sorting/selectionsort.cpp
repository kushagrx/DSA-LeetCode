#include <iostream>
using namespace std;
void select_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                int temp=arr[j];
                arr[j]=arr[mini];
                arr[mini]=temp;
            }
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
    select_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}