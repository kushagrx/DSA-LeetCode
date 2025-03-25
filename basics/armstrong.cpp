#include <bits/stdc++.h>
using namespace std;
// An armstrong number is each digit raised to the power
//of the number of digits and their sum = original number
int main(){
    int num;
    cin>>num;
    int sum=0;
    int count=0;
    while(num>0){
        int lastdigit=num%10;
        count=count+1;
        num=num/10;
    }
    cout<<count;
    // count of digits ACQUIRED
    
    return 0;
}