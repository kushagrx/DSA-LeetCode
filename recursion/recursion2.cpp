#include <iostream>
using namespace std;

int count=0;
void print(int n){
    if(count==n){
        return;
    }
    cout<<"hello"<<endl;
    count++;
    print(n);
}

int main(){
    int num;
    cin>>num;
    print(num);
    return 0;
}