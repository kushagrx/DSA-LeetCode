#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[2];
    return 0;
}   

int main(){
    //2d array
    int arr[3][5]; //this means 3 rows and 5 cols
    arr[1][4]=74;
    cout<<arr[1][4];
    return 0;
}   */

int main(){
    //STRINGS
    string x = "kushagra";
    int len=x.size();
    cout<<"entered string: "<<x<<"\n";
    cout<<"length = "<<len<<"\n";
    cout<<"the last letter is "<<x[len-1]<<"\n";
    x[len-1]='x'; // ''used instead of "" because
    //they are characters not string.
    cout<<x;
}