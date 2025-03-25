#include <iostream>
using namespace std;
int main(){
    // first creating the problem array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // now precomputing
    int hasharr[12]={0};
    // the {0} initialises all the elements to 0
    for(int i=0;i<n;i++){
        hasharr[arr[i]]+=1;
    }

    int query;
    cin>>query;
    while(query>0){
        int num;
        cin>>num;
        query--;
        cout<<hasharr[num]<<endl;
    } // this is fetching the desired query
    return 0;
}