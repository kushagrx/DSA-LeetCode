//  ***FOR AND WHILE LOOPS (CRUCIAL IN DSA)***
#include <iostream>
using namespace std;

/*int main(){
    
    for(int i=1;i<6;i++){
        cout<< "kushagra" << "\n";
    }   

   int i=5;
   while(i>0){
    cout<<i<<endl;
    i=i-1;
   }    
    return 0;
} */

//FUNCTIONS

/*
void -> does not return anything
return
parametrised
non-parameterised
*/

/*
void printName(){
    cout<<"hey kushagra"<<endl;
}
void yourName(string name){    //void+parameterised
    cout<<"hello "<< name;
}
int main(){
    printName();
    string name;
    cin>>name;
    yourName(name);
    return 0;
}   */

int sum(int x,int y){
    int z=x+y;
    return z;
}
int main(){
    int x,y;
    cin>>x>>y;
    int z=sum(x,y);
    cout<<z;
    return 0;
} 
