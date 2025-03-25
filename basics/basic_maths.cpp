#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int duplicate=n;
    //int counter=0;
    int revnumber=0;
    while(n>0){
        int lastdigit = n%10;
        //counter=counter+1;
        revnumber=(revnumber*10)+lastdigit;
        n=n/10;
    }
    //cout<<revnumber;
    if(revnumber == duplicate){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    //cout<<counter;
    return 0;
}