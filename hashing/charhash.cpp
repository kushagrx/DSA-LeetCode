#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;

    int hash[256]={0};
    for(int i=0;i<word.size();i++){
        hash[word[i]]+=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        char key;
        cin>>key;
        cout<<hash[key]<<endl;
    }
    return 0;
}