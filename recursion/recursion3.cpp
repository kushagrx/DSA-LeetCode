#include <iostream>
using namespace std;

// int fxn(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+fxn(n-1);
// }
// int main(){
//     int num;
//     cin>>num;
//     int result=fxn(num);
//     cout<<result;
//     return 0;
// }
int fact(int n){
    if(n==1){
        return 1; // return 0 will give a zero
    }
    return n*fact(n-1);
}
int main(){
    int num;
    cin>>num;
    int result=fact(num);
    cout<<result;
    return 0;
}