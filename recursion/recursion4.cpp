#include <iostream>
using namespace std;
void swap(int i,int j){
    if(i>=j){
        return 0;
    }
    return swap(i+1,j-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    swap(arr[0],arr[n-1]);
    return 0;
}