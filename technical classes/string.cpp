#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1 = "dbca";
    vector<char> v;
    for (int i = 0; i < s1.size(); i++) {
        v.push_back(s1[i]);
    }
    sort(v.begin(), v.end());
    for(auto it:v){
        cout<<it;
    }
    return 0;
}