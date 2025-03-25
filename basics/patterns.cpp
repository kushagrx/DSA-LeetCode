#include <iostream>
using namespace std;
/*int main(){
    for(int i=1;i<6;i++){
        //space
        for(int j=4;j>=i;j--){
            cout<<" ";
        }
        //stars
        for(int z=1;z<2*i;z++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} */
int main(){
    int i,j,z;
    for(i=0;i<5;i++){
        
    for(j=0;j<i;j++){
        cout<<" ";
     }
    for(z=9;z>(i+j);z--){
        cout<<"*";
    }
        cout<<endl;
    }
    return 0;
}