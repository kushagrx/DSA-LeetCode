#include <iostream>
using namespace std;
bool isPerfectSquare(int n){
    for(int i=1;i*i<=n;i++){
        if(i*i==n){
            return true;
        } 
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    if(isPerfectSquare(n)){
        cout<<n<< "is a perfect square."<<endl;
    }
    else {
        cout<<n<< " is not a perfect square." << endl;
    }
    return 0;
}