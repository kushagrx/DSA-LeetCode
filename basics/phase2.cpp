//If else beginning
#include <iostream>
using namespace std;

/*    BASIC IF ELSE AND NESTED IFELSE
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult!";
    }
    else{
        cout<<"You are underage!";
    }
    return 0;
}   */

int main(){
    int dayNum;
    cin>>dayNum;
    switch(dayNum){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        default:
        cout<<"Please enter numbers"<<"\n"<<"from 1-3";
        break;
    }
    return 0;
}