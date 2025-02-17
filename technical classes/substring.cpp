#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> s = {"abc", "ab", "ad", "abb"};
    string prefix = "ab";
    int count = 0;
//starts_with requires version 20, i got v14
    for (const auto& it : s) {
        if (it.starts_with(prefix)){ 
            count += 1;
        }
    }

    cout << count;
    return 0;
}