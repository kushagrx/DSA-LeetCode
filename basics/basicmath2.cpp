#include <iostream>
using namespace std;

/*int main(){
    int num;
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            cout << i << " ";
        }
    }
    return 0;
}*/

int main(){
    int num;
    cin>>num;
    if(num<=1){
        cout<<"not a prime number";
    }
    else{
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                cout<<"not a prime number";
                break;
            }
        }
        if(i==num){
            cout<<"it is a prime number";
        }

    }
    return 0;
}