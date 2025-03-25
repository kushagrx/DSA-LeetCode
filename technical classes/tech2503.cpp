#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    unordered_map<char, int> freqMap;
    
    for (char c : str) {
        freqMap[c]++;
    }

    cout << "\nCharacter Frequencies:\n";
    for (const auto& pair : freqMap) {
        cout << "'" << pair.first << "' : " << pair.second << endl;
    }

    return 0;
}